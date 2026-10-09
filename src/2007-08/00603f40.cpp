// from server: 64% by colin
// roc 2007-08 00603f40  unit: RBX::SleepStage  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00603f40
//
// 00603f40  83ec0c               sub esp, 0xc
// 00603f43  56                   push esi
// 00603f44  8b742414             mov esi, dword ptr [esp + 0x14]
// 00603f48  57                   push edi
// 00603f49  56                   push esi
// 00603f4a  8bf9                 mov edi, ecx
// 00603f4c  e88ffcffff           call 0x603be0
// 00603f51  8d442418             lea eax, [esp + 0x18]
// 00603f55  50                   push eax
// 00603f56  8d4c240c             lea ecx, [esp + 0xc]
// 00603f5a  51                   push ecx
// 00603f5b  8d4f10               lea ecx, [edi + 0x10]
// 00603f5e  89742420             mov dword ptr [esp + 0x20], esi
// 00603f62  e849eafdff           call 0x5e29b0
// 00603f67  6a00                 push 0
// 00603f69  8bce                 mov ecx, esi
// 00603f6b  e8d0f0faff           call 0x5b3040
// 00603f70  8bce                 mov ecx, esi
// 00603f72  e849f0faff           call 0x5b2fc0
// 00603f77  85c0                 test eax, eax
// 00603f79  7509                 jne 0x603f84
// 00603f7b  8b4f08               mov ecx, dword ptr [edi + 8]
// 00603f7e  56                   push esi
// 00603f7f  e85c320200           call 0x6271e0
// 00603f84  5f                   pop edi
// 00603f85  5e                   pop esi
// 00603f86  83c40c               add esp, 0xc
// 00603f89  c20400               ret 4

struct SleepStage {
    char pad[8];
    int field_8;
    char pad2[4];
    char field_10[0x40];
    void sub_603be0(void*);
    void sub_5e29b0(void*, void*);
    void sub_5b3040(int);
    int sub_5b2fc0();
    void sub_6271e0(void*);
    void func_00603f40(void*);
};

void SleepStage::func_00603f40(void* arg)
{
    void* local1;
    void* local2;
    void* local3;

    sub_603be0(arg);

    local3 = arg;
    sub_5e29b0(&local1, &local2);
    sub_5b3040(0);
    if (sub_5b2fc0() == 0)
        sub_6271e0(arg);
}
