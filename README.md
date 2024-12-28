My école 42 Libft project

# Libft

Libft, C programlama dilinde sıklıkla kullanılan standart kütüphane fonksiyonlarını yeniden yazarak temel algoritma ve veri yapıları konusundaki anlayışınızı geliştirmenizi amaçlayan bir projedir. Bu proje, aynı zamanda yazılım geliştirme sürecinde yeniden kullanılabilir kodlar oluşturma becerilerinizi geliştirmeyi hedefler.

## İçindekiler

1. [Projenin Amacı](#projenin-amacı)
2. [Fonksiyon Listesi](#fonksiyon-listesi)
3. [Kurulum](#kurulum)
4. [Kullanım](#kullanım)
5. [Fonksiyonların Açıklamaları ve Örnek Kullanımları](#fonksiyonlarin-açıklamaları-ve-örnek-kullanımları)
6. [Katkıda Bulunma](#katkıda-bulunma)
7. [Lisans](#lisans)

---

## Projenin Amacı

Libft, kendi standart kütüphanenizi yazmanızı gerektirir. Projenin amacı şunlardır:

- Standart C fonksiyonlarını derinlemesine anlamak.
- Bellek yönetimi, string işlemleri ve algoritmalara dair temel kavramları öğrenmek.
- Kod yazma standartlarına uygun bir şekilde program geliştirme alışkanlığı kazanmak.
- Yeniden kullanılabilir ve taşınabilir bir kütüphane oluşturmak.

---

## Fonksiyon Listesi

Libft, aşağıdaki kategorilerde çeşitli fonksiyonlar içerir:

### 1. **Memory (Bellek) Fonksiyonları**
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`

### 2. **String Manipülasyonu**
- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strdup`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`

### 3. **Karakter Kontrolü**
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`

### 4. **Dönüşüm Fonksiyonları**
- `ft_atoi`
- `ft_itoa`

### 5. **Dosya İşlemleri**
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### 6. **Bonus Fonksiyonlar**
- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

---

## Kurulum

Libft'i projenize dahil etmek için aşağıdaki adımları takip edin:

1. Bu projeyi bilgisayarınıza klonlayın:
   ```bash
   git clone https://github.com/kullanici_adi/libft.git
   cd libft
   ```

2. Kütüphaneyi oluşturmak için `make` komutunu çalıştırın:
   ```bash
   make
   ```
   Bu işlem sonucunda bir `libft.a` dosyası oluşturulacaktır.

3. Projenizde bu kütüphaneyi kullanmak için, `libft.a` dosyasını ve başlık dosyasını (`libft.h`) projenize dahil edin.

---

## Kullanım

Libft kütüphanesini bir projede kullanmak için aşağıdaki gibi bir `gcc` komutu kullanabilirsiniz:

```bash
gcc -Wall -Wextra -Werror -L. -lft your_program.c -o your_program
```

Bu komut:
- `-L.`: Kütüphane dosyasının bulunduğu dizini belirtir.
- `-lft`: `libft.a` kütüphanesini kullanır.

---

## Fonksiyonların Açıklamaları ve Örnek Kullanımları

### 1. `ft_strlen`
**Tanım:** Bir stringin uzunluğunu döndürür.

**Prototip:**
```c
size_t ft_strlen(const char *s);
```

**Örnek Kullanım:**
```c
#include "libft.h"

int main() {
    char *str = "Hello, Libft!";
    size_t len = ft_strlen(str);
    printf("String uzunluğu: %zu\n", len);
    return 0;
}
```

### 2. `ft_strjoin`
**Tanım:** İki stringi birleştirir ve yeni bir string döndürür.

**Prototip:**
```c
char *ft_strjoin(char const *s1, char const *s2);
```

**Örnek Kullanım:**
```c
#include "libft.h"

int main() {
    char *s1 = "Merhaba, ";
    char *s2 = "Dünya!";
    char *joined = ft_strjoin(s1, s2);
    printf("Birleştirilmiş string: %s\n", joined);
    free(joined);
    return 0;
}
```

### 3. `ft_split`
**Tanım:** Bir stringi belirli bir karaktere göre böler ve bir string dizisi döndürür.

**Prototip:**
```c
char **ft_split(char const *s, char c);
```

**Örnek Kullanım:**
```c
#include "libft.h"

int main() {
    char *str = "Hello,42,School";
    char **split = ft_split(str, ',');

    for (int i = 0; split[i] != NULL; i++) {
        printf("Segment %d: %s\n", i, split[i]);
        free(split[i]);
    }
    free(split);

    return 0;
}
```

### 4. `ft_itoa`
**Tanım:** Bir tam sayıyı stringe dönüştürür.

**Prototip:**
```c
char *ft_itoa(int n);
```

**Örnek Kullanım:**
```c
#include "libft.h"

int main() {
    int num = 42;
    char *str = ft_itoa(num);
    printf("Stringe dönüştürülen sayı: %s\n", str);
    free(str);
    return 0;
}
```

---

## Katkıda Bulunma

Bu projeyi geliştirmek için katkıda bulunmak isterseniz, lütfen şu adımları takip edin:

1. Projeyi forklayın.
2. Yeni bir dal oluşturun:
   ```bash
   git checkout -b yeni-ozellik
   ```
3. Değişikliklerinizi yapın ve commitleyin:
   ```bash
   git commit -m "Yeni özellik eklendi"
   ```
4. Değişikliklerinizi GitHub'a gönderin:
   ```bash
   git push origin yeni-ozellik
   ```
5. Bir pull request oluşturun.

---

## Lisans

Bu proje herhangi bir lisansla sınırlandırılmamıştır. İstediğiniz gibi kullanabilirsiniz.

---

Daha fazla bilgi için benimle iletişime geçmekten çekinmeyin! 🎉

