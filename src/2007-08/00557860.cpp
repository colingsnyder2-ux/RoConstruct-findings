// from server: 54% by colin
// roc 2007-08 00557860  unit: ChatEnter  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00557860
//
// 00557860  64a100000000         mov eax, dword ptr fs:[0]
// 00557866  6aff                 push -1
// 00557868  684e327500           push 0x75324e
// 0055786d  50                   push eax
// 0055786e  b801000000           mov eax, 1
// 00557873  64892500000000       mov dword ptr fs:[0], esp
// 0055787a  8405001f8c00         test byte ptr [0x8c1f00], al
// 00557880  7526                 jne 0x5578a8
// 00557882  0905001f8c00         or dword ptr [0x8c1f00], eax
// 00557888  c744240800000000     mov dword ptr [esp + 8], 0
// 00557890  e88bd2ffff           call 0x554b20
// 00557895  a3fc1e8c00           mov dword ptr [0x8c1efc], eax
// 0055789a  8b0c24               mov ecx, dword ptr [esp]
// 0055789d  64890d00000000       mov dword ptr fs:[0], ecx
// 005578a4  83c40c               add esp, 0xc
// 005578a7  c3                   ret 
// 005578a8  8b0c24               mov ecx, dword ptr [esp]
// 005578ab  a1fc1e8c00           mov eax, dword ptr [0x8c1efc]
// 005578b0  64890d00000000       mov dword ptr fs:[0], ecx
// 005578b7  83c40c               add esp, 0xc
// 005578ba  c3                   ret 

struct ChatEnter {
    static int s_initialized;
    static int s_value;
    static int Init();
};

int ChatEnter::s_initialized = 0;
int ChatEnter::s_value = 0;

int ChatEnter::Init()
{
    if ((s_initialized & 1) == 0)
    {
        s_initialized |= 1;
        s_value = 0;
        s_value = Init();
    }
    return s_value;
}
