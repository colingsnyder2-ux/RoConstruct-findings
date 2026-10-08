// from server: 88% by colin
// roc 2007-08 00456040  unit: ToggleIDEModeVerb  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00456040
//
// 00456040  8b01                 mov eax, dword ptr [ecx]
// 00456042  8b5008               mov edx, dword ptr [eax + 8]
// 00456045  ffd2                 call edx
// 00456047  84c0                 test al, al
// 00456049  7421                 je 0x45606c
// 0045604b  e8b29e1d00           call 0x62ff02
// 00456050  8b4004               mov eax, dword ptr [eax + 4]
// 00456053  8b4020               mov eax, dword ptr [eax + 0x20]
// 00456056  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00456059  6a00                 push 0
// 0045605b  68f5800000           push 0x80f5
// 00456060  6811010000           push 0x111
// 00456065  51                   push ecx
// 00456066  ff15d0ec7700         call dword ptr [0x77ecd0]
// 0045606c  c20400               ret 4

struct ToggleIDEModeVerb {
    bool CanDo();
    void Do(int);
};

extern "C" int __stdcall GetSomething();
extern "C" int __stdcall PostMessageA(int, unsigned int, unsigned int, int);

bool ToggleIDEModeVerb::CanDo()
{
    return ((bool (__thiscall *)(void *))*(void **)(*(int *)this + 8))(this);
}

void ToggleIDEModeVerb::Do(int a)
{
    if (CanDo())
    {
        int x = GetSomething();
        int y = *(int *)(x + 4);
        int z = *(int *)(y + 0x20);
        int w = *(int *)(z + 0x20);
        PostMessageA(w, 0x111, 0x80f5, 0);
    }
}
