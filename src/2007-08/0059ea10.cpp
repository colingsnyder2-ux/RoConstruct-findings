// from server: 62% by colin
struct ServiceProvider;

struct LegacyHopperService {
    void onServiceProvider(ServiceProvider* oldProvider, ServiceProvider* newProvider);
};

extern "C" void __cdecl sub_57aa50(LegacyHopperService* self, ServiceProvider* oldProvider, ServiceProvider* newProvider);
extern "C" int __fastcall sub_48cf60(ServiceProvider* self, int);
extern "C" unsigned int __fastcall sub_487c10(LegacyHopperService* self, int);
extern "C" void __fastcall sub_541630(void* self, int, int value);
extern "C" void __cdecl sub_77e6d8();

void LegacyHopperService::onServiceProvider(ServiceProvider* oldProvider, ServiceProvider* newProvider) {
    sub_57aa50(this, oldProvider, newProvider);
    if (newProvider) {
        int count = sub_48cf60(newProvider, 0);
        unsigned int n = sub_487c10(this, 0);
        while (n > 0) {
            int* p = *(int**)((char*)this + 0xc0);
            int* begin = *(int**)((char*)p + 4);
            if (begin == 0 || (*(int**)((char*)p + 8) - begin) >> 3 == 0) {
                sub_77e6d8();
            }
            int* first = *(int**)((char*)p + 4);
            sub_541630((void*)*first, 0, count);
            n = sub_487c10(this, 0);
        }
        sub_541630(this, 0, 0);
    }
}
