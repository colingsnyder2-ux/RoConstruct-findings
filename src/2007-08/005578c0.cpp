// from server: 42% by colin
// roc 2007-08 005578c0  unit: ChatEnter  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005578c0
//
// 005578c0  64a100000000         mov eax, dword ptr fs:[0]
// 005578c6  6aff                 push -1
// 005578c8  686e327500           push 0x75326e
// 005578cd  50                   push eax
// 005578ce  b801000000           mov eax, 1
// 005578d3  64892500000000       mov dword ptr fs:[0], esp
// 005578da  8405081f8c00         test byte ptr [0x8c1f08], al
// 005578e0  7526                 jne 0x557908
// 005578e2  0905081f8c00         or dword ptr [0x8c1f08], eax
// 005578e8  c744240800000000     mov dword ptr [esp + 8], 0
// 005578f0  e82bd2ffff           call 0x554b20
// 005578f5  a3041f8c00           mov dword ptr [0x8c1f04], eax
// 005578fa  8b0c24               mov ecx, dword ptr [esp]
// 005578fd  64890d00000000       mov dword ptr fs:[0], ecx
// 00557904  83c40c               add esp, 0xc
// 00557907  c3                   ret 
// 00557908  8b0c24               mov ecx, dword ptr [esp]
// 0055790b  a1041f8c00           mov eax, dword ptr [0x8c1f04]
// 00557910  64890d00000000       mov dword ptr fs:[0], ecx
// 00557917  83c40c               add esp, 0xc
// 0055791a  c3                   ret 

struct ChatEnter {
    void init();
};

extern "C" int __cdecl sub_554B20();

int g_8c1f04;
int g_8c1f08;

void ChatEnter::init()
{
    __try {
        if (!(g_8c1f08 & 1)) {
            g_8c1f08 |= 1;
            g_8c1f04 = sub_554B20();
        }
    } __except (1) {
    }
}
