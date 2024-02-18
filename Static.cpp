// Statik.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class Payment {
    private:

        float tutar = 0;

    public:
        std::string paraBirimi;

        void setTutar(float t) {
            if (t > 0) {
                tutar = t;
            }
            else {
                tutar = 0.1;
            }
        }

        void pay() {
            std::cout << tutar << ":Odeme Alindi";
        }

        friend void degistir(Payment paymentPtr);


 };


    void degistir(Payment paymentPtr) {
        paymentPtr.tutar = -10;
    }

int main() {
    Payment payment;
    degistir(payment);
    payment.paraBirimi = "tl";
    payment.pay();
}





// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
