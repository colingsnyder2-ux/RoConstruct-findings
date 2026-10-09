// from server: 42% by colin
// roc 2007-08 005e40f0  unit: RBX::ArrowTool  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e40f0
//
// 005e40f0  64a100000000         mov eax, dword ptr fs:[0]
// 005e40f6  6aff                 push -1
// 005e40f8  686eac7500           push 0x75ac6e
// 005e40fd  50                   push eax
// 005e40fe  b801000000           mov eax, 1
// 005e4103  64892500000000       mov dword ptr fs:[0], esp
// 005e410a  8405fc6e8c00         test byte ptr [0x8c6efc], al
// 005e4110  7526                 jne 0x5e4138
// 005e4112  0905fc6e8c00         or dword ptr [0x8c6efc], eax
// 005e4118  c744240800000000     mov dword ptr [esp + 8], 0
// 005e4120  e8fb09f7ff           call 0x554b20
// 005e4125  a3f86e8c00           mov dword ptr [0x8c6ef8], eax
// 005e412a  8b0c24               mov ecx, dword ptr [esp]
// 005e412d  64890d00000000       mov dword ptr fs:[0], ecx
// 005e4134  83c40c               add esp, 0xc
// 005e4137  c3                   ret 
// 005e4138  8b0c24               mov ecx, dword ptr [esp]
// 005e413b  a1f86e8c00           mov eax, dword ptr [0x8c6ef8]
// 005e4140  64890d00000000       mov dword ptr fs:[0], ecx
// 005e4147  83c40c               add esp, 0xc
// 005e414a  c3                   ret 

extern "C" int __cdecl sub_554B20();

int g_8c6ef8;
int g_8c6efc;

void sub_5e40f0()
{
    __try
    {
        if ((g_8c6efc & 1) == 0)
        {
            g_8c6efc |= 1;
            g_8c6ef8 = sub_554B20();
        }
    }
    __except (1)
    {
    }
}
