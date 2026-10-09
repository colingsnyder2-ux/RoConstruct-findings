// from server: 67% by colin
// roc 2007-08 004996a0  unit: RBX::Network::Client  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004996a0
//
// 004996a0  56                   push esi
// 004996a1  8db1ecfeffff         lea esi, [ecx - 0x114]
// 004996a7  8bce                 mov ecx, esi
// 004996a9  e882850a00           call 0x541c30
// 004996ae  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 004996b4  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 004996ba  8b01                 mov eax, dword ptr [ecx]
// 004996bc  8b4064               mov eax, dword ptr [eax + 0x64]
// 004996bf  6a00                 push 0
// 004996c1  6a01                 push 1
// 004996c3  52                   push edx
// 004996c4  8b9630010000         mov edx, dword ptr [esi + 0x130]
// 004996ca  52                   push edx
// 004996cb  ffd0                 call eax
// 004996cd  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 004996d3  8b11                 mov edx, dword ptr [ecx]
// 004996d5  5e                   pop esi
// 004996d6  c744240800000000     mov dword ptr [esp + 8], 0
// 004996de  c7442404b80b0000     mov dword ptr [esp + 4], 0xbb8
// 004996e6  8b4228               mov eax, dword ptr [edx + 0x28]
// 004996e9  ffe0                 jmp eax

struct Client {
    char pad[0x114];
    int field_f8;
    int field_130;
    int field_134;
    void func_004996a0();
};

extern "C" void __stdcall func_00541c30(int);

void Client::func_004996a0()
{
    char* base = (char*)this - 0x114;
    func_00541c30((int)base);
    int* p = (int*)(base + 0xf8);
    int* vt = (int*)*p;
    void (__stdcall *fn)(int, int, int, int) = (void (__stdcall *)(int, int, int, int))vt[0x64 / 4];
    fn(*(int*)(base + 0x130), *(int*)(base + 0x134), 1, 0);
    int* p2 = (int*)(base + 0xf8);
    int* vt2 = (int*)*p2;
    void (__stdcall *fn2)(int, int) = (void (__stdcall *)(int, int))vt2[0x28 / 4];
    fn2(0xbb8, 0);
}
