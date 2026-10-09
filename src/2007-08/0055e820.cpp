// from server: 42% by colin
// roc 2007-08 0055e820  unit: RBX::FixedCameraCommand  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e820
//
// 0055e820  64a100000000         mov eax, dword ptr fs:[0]
// 0055e826  6aff                 push -1
// 0055e828  68ae3c7500           push 0x753cae
// 0055e82d  50                   push eax
// 0055e82e  b801000000           mov eax, 1
// 0055e833  64892500000000       mov dword ptr fs:[0], esp
// 0055e83a  840518238c00         test byte ptr [0x8c2318], al
// 0055e840  7526                 jne 0x55e868
// 0055e842  090518238c00         or dword ptr [0x8c2318], eax
// 0055e848  c744240800000000     mov dword ptr [esp + 8], 0
// 0055e850  e8cb62ffff           call 0x554b20
// 0055e855  a314238c00           mov dword ptr [0x8c2314], eax
// 0055e85a  8b0c24               mov ecx, dword ptr [esp]
// 0055e85d  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e864  83c40c               add esp, 0xc
// 0055e867  c3                   ret 
// 0055e868  8b0c24               mov ecx, dword ptr [esp]
// 0055e86b  a114238c00           mov eax, dword ptr [0x8c2314]
// 0055e870  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e877  83c40c               add esp, 0xc
// 0055e87a  c3                   ret 

extern "C" int __cdecl sub_00554B20();

int dword_8C2314;
int dword_8C2318;

void sub_0055E820()
{
    __try
    {
        if ((dword_8C2318 & 1) == 0)
        {
            dword_8C2318 |= 1;
            dword_8C2314 = sub_00554B20();
        }
    }
    __except (1)
    {
    }
}
