// from server: 27% by colin
// roc 2007-08 0042da30  unit: boost::any::_N::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042da30
//
// 0042da30  55                   push ebp
// 0042da31  8bec                 mov ebp, esp
// 0042da33  6aff                 push -1
// 0042da35  68c0d57300           push 0x73d5c0
// 0042da3a  64a100000000         mov eax, dword ptr fs:[0]
// 0042da40  50                   push eax
// 0042da41  83ec08               sub esp, 8
// 0042da44  53                   push ebx
// 0042da45  56                   push esi
// 0042da46  57                   push edi
// 0042da47  a188518b00           mov eax, dword ptr [0x8b5188]
// 0042da4c  33c5                 xor eax, ebp
// 0042da4e  50                   push eax
// 0042da4f  8d45f4               lea eax, [ebp - 0xc]
// 0042da52  64a300000000         mov dword ptr fs:[0], eax
// 0042da58  8965f0               mov dword ptr [ebp - 0x10], esp
// 0042da5b  8b7d08               mov edi, dword ptr [ebp + 8]
// 0042da5e  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 0042da61  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0042da64  897dec               mov dword ptr [ebp - 0x14], edi
// 0042da67  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0042da6e  8bff                 mov edi, edi
// 0042da70  85f6                 test esi, esi
// 0042da72  763a                 jbe 0x42daae
// 0042da74  53                   push ebx
// 0042da75  57                   push edi
// 0042da76  e885fcffff           call 0x42d700
// 0042da7b  83c408               add esp, 8
// 0042da7e  83ee01               sub esi, 1
// 0042da81  83c708               add edi, 8
// 0042da84  897d08               mov dword ptr [ebp + 8], edi
// 0042da87  ebe7                 jmp 0x42da70

extern unsigned char G_8b5188;
extern unsigned char G_73d5c0;

void __cdecl sub_42d700(void* dst, const void* src);

void __cdecl sub_42da30(void* dst, unsigned int count, const void* src)
{
    unsigned char* d = (unsigned char*)dst;
    const unsigned char* s = (const unsigned char*)src;
    while (count > 0)
    {
        sub_42d700(d, s);
        count -= 1;
        d += 8;
    }
}
