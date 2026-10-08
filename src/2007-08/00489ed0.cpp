// from server: 53% by colin
// roc 2007-08 00489ed0  unit: RBX::Network::VPlayer::?$Notifier  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00489ed0
//
// 00489ed0  8b442408             mov eax, dword ptr [esp + 8]
// 00489ed4  83f802               cmp eax, 2
// 00489ed7  7519                 jne 0x489ef2
// 00489ed9  56                   push esi
// 00489eda  8b742408             mov esi, dword ptr [esp + 8]
// 00489ede  56                   push esi
// 00489edf  b9a0ca8800           mov ecx, 0x88caa0
// 00489ee4  ff1508e77700         call dword ptr [0x77e708]
// 00489eea  f6d8                 neg al
// 00489eec  1bc0                 sbb eax, eax
// 00489eee  23c6                 and eax, esi
// 00489ef0  5e                   pop esi
// 00489ef1  c3                   ret 
// 00489ef2  8b542404             mov edx, dword ptr [esp + 4]
// 00489ef6  c644240800           mov byte ptr [esp + 8], 0
// 00489efb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00489eff  51                   push ecx
// 00489f00  50                   push eax
// 00489f01  52                   push edx
// 00489f02  e8b921faff           call 0x42c0c0
// 00489f07  83c40c               add esp, 0xc
// 00489f0a  c3                   ret 

struct type_info
{
    bool operator==(const type_info& other) const;
};

struct VPlayer
{
    static type_info typeInfo;
};

struct Notifier
{
    int func(int a, int b);
};

int Notifier::func(int a, int b)
{
    if (b == 2)
    {
        int result = a;
        if (!(VPlayer::typeInfo == VPlayer::typeInfo))
            result = 0;
        return result;
    }
    return func(a, b);
}
