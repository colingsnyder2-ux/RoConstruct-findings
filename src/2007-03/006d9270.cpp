// from server: 100% by tester
// roc 2007-03 006d9270  unit: seg_006d0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d9270
//
// 006d9270  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006d9273  e80834f8ff           call 0x65c680
// 006d9278  8bc8                 mov ecx, eax
// 006d927a  e845190600           call 0x73abc4
// 006d927f  a820                 test al, 0x20
// 006d9281  7412                 je 0x6d9295
// 006d9283  8b442404             mov eax, dword ptr [esp + 4]
// 006d9287  8b4814               mov ecx, dword ptr [eax + 0x14]
// 006d928a  8b11                 mov edx, dword ptr [ecx]
// 006d928c  89442404             mov dword ptr [esp + 4], eax
// 006d9290  8b4274               mov eax, dword ptr [edx + 0x74]
// 006d9293  ffe0                 jmp eax
// 006d9295  c20400               ret 4

struct CXTPPropertyGridPaintManager {
    char pad[32];
    void* field_0x20;

    void func_006f8f10(void* arg);
};

extern "C" void* __fastcall sub_682a20(void*);
extern "C" char __fastcall sub_738412(void*);

void CXTPPropertyGridPaintManager::func_006f8f10(void* arg)
{
    void* p = sub_682a20(field_0x20);
    char flags = sub_738412(p);
    if (flags & 0x20) {
        void* v = *(void**)((char*)arg + 0x14);
        void** vtbl = *(void***)v;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[0x74 / 4];
        fn(arg);
    }
}
