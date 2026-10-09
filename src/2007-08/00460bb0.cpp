// from server: 64% by colin
// roc 2007-08 00460bb0  unit: RBX::VRunService::?$MarshaledListener  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00460bb0
//
// 00460bb0  83ec08               sub esp, 8
// 00460bb3  56                   push esi
// 00460bb4  8bf1                 mov esi, ecx
// 00460bb6  8b4618               mov eax, dword ptr [esi + 0x18]
// 00460bb9  83c02c               add eax, 0x2c
// 00460bbc  8d4c2404             lea ecx, [esp + 4]
// 00460bc0  89442404             mov dword ptr [esp + 4], eax
// 00460bc4  c644240800           mov byte ptr [esp + 8], 0
// 00460bc9  e8a2ccfbff           call 0x41d870
// 00460bce  8b442414             mov eax, dword ptr [esp + 0x14]
// 00460bd2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00460bd6  8b16                 mov edx, dword ptr [esi]
// 00460bd8  8b520c               mov edx, dword ptr [edx + 0xc]
// 00460bdb  50                   push eax
// 00460bdc  51                   push ecx
// 00460bdd  8bce                 mov ecx, esi
// 00460bdf  ffd2                 call edx
// 00460be1  807c240800           cmp byte ptr [esp + 8], 0
// 00460be6  5e                   pop esi
// 00460be7  740a                 je 0x460bf3
// 00460be9  8b0424               mov eax, dword ptr [esp]
// 00460bec  50                   push eax
// 00460bed  ff15f8d27700         call dword ptr [0x77d2f8]
// 00460bf3  83c408               add esp, 8
// 00460bf6  c20800               ret 8

struct S_00460bb0 {
    char pad[0x18];
    int field_18;
    void method(int, int);
};

extern "C" void __stdcall sub_0041d870(void*);
extern "C" void __stdcall sub_77d2f8(void*);

void S_00460bb0::method(int arg1, int arg2)
{
    int local;
    char flag;
    void* p = (void*)(field_18 + 0x2c);
    local = (int)p;
    flag = 0;
    sub_0041d870(&local);
    void (__thiscall *fn)(void*, int, int) = *(void (__thiscall **)(void*, int, int))((*(int*)this) + 0xc);
    fn(this, local, arg1);
    if (flag == 0) {
        sub_77d2f8((void*)local);
    }
}
