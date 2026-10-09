// from server: 100% by colin
// roc 2007-08 004172d0  unit: boost::X::U?$last_value::?$holder  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004172d0
//
// 004172d0  8a442404             mov al, byte ptr [esp + 4]
// 004172d4  56                   push esi
// 004172d5  8bf1                 mov esi, ecx
// 004172d7  8d4c2408             lea ecx, [esp + 8]
// 004172db  51                   push ecx
// 004172dc  c70600000000         mov dword ptr [esi], 0
// 004172e2  c7460400000000       mov dword ptr [esi + 4], 0
// 004172e9  c7460800000000       mov dword ptr [esi + 8], 0
// 004172f0  8844240c             mov byte ptr [esp + 0xc], al
// 004172f4  e8d7060700           call 0x4879d0
// 004172f9  83c404               add esp, 4
// 004172fc  84c0                 test al, al
// 004172fe  7524                 jne 0x417324
// 00417300  6a01                 push 1
// 00417302  c7460850714100       mov dword ptr [esi + 8], 0x417150
// 00417309  c70640724100         mov dword ptr [esi], 0x417240
// 0041730f  e8e28b2100           call 0x62fef6
// 00417314  83c404               add esp, 4
// 00417317  85c0                 test eax, eax
// 00417319  7406                 je 0x417321
// 0041731b  8a542408             mov dl, byte ptr [esp + 8]
// 0041731f  8810                 mov byte ptr [eax], dl
// 00417321  894604               mov dword ptr [esi + 4], eax
// 00417324  8bc6                 mov eax, esi
// 00417326  5e                   pop esi
// 00417327  c20800               ret 8

struct S_func_004172d0 {
    int m_0;
    int m_4;
    int m_8;
    S_func_004172d0* f(char arg, int arg2);
};

extern "C" char __cdecl sub_4879d0(char* p);
extern "C" void* __cdecl sub_62fef6(int n);

S_func_004172d0* S_func_004172d0::f(char arg, int arg2)
{
    m_0 = 0;
    m_4 = 0;
    m_8 = 0;
    char local = arg;
    if (!sub_4879d0(&local)) {
        m_8 = 0x417150;
        m_0 = 0x417240;
        void* p = sub_62fef6(1);
        if (p) {
            *(char*)p = local;
        }
        m_4 = (int)p;
    }
    return this;
}
