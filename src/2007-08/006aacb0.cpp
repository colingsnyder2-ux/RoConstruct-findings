// from server: 77% by colin
// roc 2007-08 006aacb0  unit: CXTPRibbonBar  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006aacb0
//
// 006aacb0  56                   push esi
// 006aacb1  57                   push edi
// 006aacb2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006aacb6  8bf1                 mov esi, ecx
// 006aacb8  56                   push esi
// 006aacb9  8bcf                 mov ecx, edi
// 006aacbb  e8e091f9ff           call 0x643ea0
// 006aacc0  85c0                 test eax, eax
// 006aacc2  752a                 jne 0x6aacee
// 006aacc4  8b07                 mov eax, dword ptr [edi]
// 006aacc6  8b5058               mov edx, dword ptr [eax + 0x58]
// 006aacc9  56                   push esi
// 006aacca  8bcf                 mov ecx, edi
// 006aaccc  ffd2                 call edx
// 006aacce  8d4604               lea eax, [esi + 4]
// 006aacd1  50                   push eax
// 006aacd2  ff15ecd27700         call dword ptr [0x77d2ec]
// 006aacd8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006aacdc  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006aace0  51                   push ecx
// 006aace1  8b8e60020000         mov ecx, dword ptr [esi + 0x260]
// 006aace7  57                   push edi
// 006aace8  52                   push edx
// 006aace9  e8a204fcff           call 0x66b190
// 006aacee  5f                   pop edi
// 006aacef  5e                   pop esi
// 006aacf0  c20c00               ret 0xc

struct CXTPRibbonBar {
    int field0;
    int field4;
    char pad[0x260 - 8];
    int field260;
    void method_6aacb0(int a, int b, int c);
};

extern "C" int __stdcall InterlockedIncrement(int*);
extern "C" int __fastcall sub_643ea0(void*, int);
extern "C" int __fastcall sub_66b190(void*, int, int, int);

void CXTPRibbonBar::method_6aacb0(int a, int b, int c) {
    int* p = (int*)a;
    int r = sub_643ea0(p, (int)this);
    if (r == 0) {
        int* vt = *(int**)p;
        int (*fn)(void*, int) = (int (*)(void*, int))vt[0x58/4];
        fn(p, (int)this);
        InterlockedIncrement((int*)((char*)this + 4));
        sub_66b190((void*)field260, b, (int)p, c);
    }
}
