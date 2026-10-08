// from server: 74% by colin
// roc 2007-08 006f8f10  unit: CXTPPropertyGridPaintManager  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f8f10
//
// 006f8f10  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006f8f13  e8089bf8ff           call 0x682a20
// 006f8f18  8bc8                 mov ecx, eax
// 006f8f1a  e8f3f40300           call 0x738412
// 006f8f1f  a820                 test al, 0x20
// 006f8f21  7412                 je 0x6f8f35
// 006f8f23  8b442404             mov eax, dword ptr [esp + 4]
// 006f8f27  8b4814               mov ecx, dword ptr [eax + 0x14]
// 006f8f2a  8b11                 mov edx, dword ptr [ecx]
// 006f8f2c  89442404             mov dword ptr [esp + 4], eax
// 006f8f30  8b4274               mov eax, dword ptr [edx + 0x74]
// 006f8f33  ffe0                 jmp eax
// 006f8f35  c20400               ret 4

struct CXTPPropertyGridPaintManager {
    void DrawItem(int);
};

extern "C" void* __fastcall sub_682A20(void*);
extern "C" char __fastcall sub_738412(void*);

void CXTPPropertyGridPaintManager::DrawItem(int arg)
{
    void* p = sub_682A20(*(void**)((char*)this + 0x20));
    char flags = sub_738412(p);
    if (flags & 0x20) {
        void* obj = *(void**)((char*)&arg + 0x14);
        void** vtbl = *(void***)obj;
        void (*fn)(void*) = (void (*)(void*))vtbl[0x74 / 4];
        fn(obj);
    }
}
