// from server: 75% by colin
// roc 2007-08 00564830  unit: CXTPDockingPaneAutoHidePanel  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00564830
//
// 00564830  56                   push esi
// 00564831  57                   push edi
// 00564832  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00564836  85ff                 test edi, edi
// 00564838  8bf1                 mov esi, ecx
// 0056483a  7405                 je 0x564841
// 0056483c  8d4704               lea eax, [edi + 4]
// 0056483f  eb02                 jmp 0x564843
// 00564841  33c0                 xor eax, eax
// 00564843  6a01                 push 1
// 00564845  50                   push eax
// 00564846  b99c148c00           mov ecx, 0x8c149c
// 0056484b  e8c0280200           call 0x587110
// 00564850  8b16                 mov edx, dword ptr [esi]
// 00564852  57                   push edi
// 00564853  50                   push eax
// 00564854  8b02                 mov eax, dword ptr [edx]
// 00564856  8bce                 mov ecx, esi
// 00564858  ffd0                 call eax
// 0056485a  5f                   pop edi
// 0056485b  5e                   pop esi
// 0056485c  c20400               ret 4

struct CXTPDockingPaneAutoHidePanel {
    void func_00564830(void* arg);
};

extern "C" void* __stdcall sub_00587110(void* arg, int flag);

void CXTPDockingPaneAutoHidePanel::func_00564830(void* arg) {
    void* p;
    if (arg != 0) {
        p = (char*)arg + 4;
    } else {
        p = 0;
    }
    void* q = sub_00587110(p, 1);
    void** vtbl = *(void***)this;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[0];
    fn(this, arg);
}
