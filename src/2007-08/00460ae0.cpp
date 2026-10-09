// from server: 57% by colin
// roc 2007-08 00460ae0  unit: RBX::VInstance::?$MarshaledListener  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00460ae0
//
// 00460ae0  83ec0c               sub esp, 0xc
// 00460ae3  56                   push esi
// 00460ae4  8bf1                 mov esi, ecx
// 00460ae6  8b4618               mov eax, dword ptr [esi + 0x18]
// 00460ae9  83c02c               add eax, 0x2c
// 00460aec  8d4c2408             lea ecx, [esp + 8]
// 00460af0  89442408             mov dword ptr [esp + 8], eax
// 00460af4  c644240c00           mov byte ptr [esp + 0xc], 0
// 00460af9  e872cdfbff           call 0x41d870
// 00460afe  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00460b02  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00460b06  83ec08               sub esp, 8
// 00460b09  8bc4                 mov eax, esp
// 00460b0b  8908                 mov dword ptr [eax], ecx
// 00460b0d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00460b11  895004               mov dword ptr [eax + 4], edx
// 00460b14  8b06                 mov eax, dword ptr [esi]
// 00460b16  8b500c               mov edx, dword ptr [eax + 0xc]
// 00460b19  8964240c             mov dword ptr [esp + 0xc], esp
// 00460b1d  51                   push ecx
// 00460b1e  8bce                 mov ecx, esi
// 00460b20  ffd2                 call edx
// 00460b22  807c240c00           cmp byte ptr [esp + 0xc], 0
// 00460b27  740b                 je 0x460b34
// 00460b29  8b442408             mov eax, dword ptr [esp + 8]
// 00460b2d  50                   push eax
// 00460b2e  ff15f8d27700         call dword ptr [0x77d2f8]
// 00460b34  5e                   pop esi
// 00460b35  83c40c               add esp, 0xc
// 00460b38  c20c00               ret 0xc

struct CriticalSection {
    int data[6];
};

extern "C" void __stdcall LeaveCriticalSection(CriticalSection*);

struct MarshaledListener {
    char pad[0x18];
    int field18;
    void func(int a, int b, int c);
};

void MarshaledListener::func(int a, int b, int c)
{
    CriticalSection* cs = (CriticalSection*)(field18 + 0x2c);
    char flag = 0;
    void* guard = &cs;
    void* guardFlag = &flag;
    (void)guard;
    (void)guardFlag;
    // call 0x41d870 - some function taking &cs and &flag
    extern void __stdcall sub_41d870(void*, void*);
    sub_41d870(&cs, &flag);
    int* vtable = *(int**)this;
    void (__thiscall *fn)(void*, int, int, int) = (void (__thiscall *)(void*, int, int, int))vtable[3];
    fn(this, a, b, c);
    if (flag) {
        LeaveCriticalSection(cs);
    }
}
