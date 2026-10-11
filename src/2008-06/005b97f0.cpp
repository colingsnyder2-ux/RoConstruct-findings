// from server: 80% by colin
// roc 2008-06 005b97f0  unit: VStockSound::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b97f0
//
// 005b97f0  56                   push esi
// 005b97f1  8bf1                 mov esi, ecx
// 005b97f3  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 005b97f9  85c0                 test eax, eax
// 005b97fb  741b                 je 0x5b9818
// 005b97fd  6a00                 push 0
// 005b97ff  50                   push eax
// 005b9800  e8ef630e00           call 0x69fbf4
// 005b9805  50                   push eax
// 005b9806  e895efffff           call 0x5b87a0
// 005b980b  83c404               add esp, 4
// 005b980e  c7863c01000000000000 mov dword ptr [esi + 0x13c], 0
// 005b9818  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005b981e  8d8e34010000         lea ecx, [esi + 0x134]
// 005b9824  5e                   pop esi
// 005b9825  85c0                 test eax, eax
// 005b9827  7408                 je 0x5b9831
// 005b9829  ff4808               dec dword ptr [eax + 8]
// 005b982c  e94fd6e9ff           jmp 0x456e80
// 005b9831  c3                   ret 

struct VStockSound_FactoryProduct {
    char pad[0x134];
    int refcounted;
    char pad2[4];
    int handle;
    void destroy();
};

extern "C" int __cdecl sub_69fbf4(int, int);
extern "C" void __cdecl sub_5b87a0(int);
extern "C" void __cdecl sub_456e80(int);

void VStockSound_FactoryProduct::destroy()
{
    if (handle) {
        sub_5b87a0(sub_69fbf4(handle, 0));
        handle = 0;
    }
    if (refcounted) {
        refcounted--;
        sub_456e80(refcounted);
    }
}
