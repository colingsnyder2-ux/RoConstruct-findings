// from server: 75% by atomic.potato
// roc 2009-06 00510f00  unit: CSHA1  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00510f00
//
// 00510f00  53                   push ebx
// 00510f01  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00510f05  56                   push esi
// 00510f06  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00510f0a  57                   push edi
// 00510f0b  8d3c9d00000000       lea edi, [ebx*4]
// 00510f12  57                   push edi
// 00510f13  56                   push esi
// 00510f14  e8f7f8ffff           call 0x510810
// 00510f19  814c37fc00000080     or dword ptr [edi + esi - 4], 0x80000000
// 00510f21  830e01               or dword ptr [esi], 1
// 00510f24  6a14                 push 0x14
// 00510f26  53                   push ebx
// 00510f27  56                   push esi
// 00510f28  e833feffff           call 0x510d60
// 00510f2d  83c414               add esp, 0x14
// 00510f30  84c0                 test al, al
// 00510f32  74de                 je 0x510f12
// 00510f34  5f                   pop edi
// 00510f35  5e                   pop esi
// 00510f36  5b                   pop ebx
// 00510f37  c3                   ret 

extern "C" void __cdecl sub_510810(unsigned int* data, int count);
extern "C" char __cdecl sub_510d60(unsigned int* data, int count, int rounds);

void __cdecl sub_510f00(unsigned int* data, int count)
{
    int i = count * 4;
    do
    {
        sub_510810(data, count);
        *(unsigned int*)((char*)data + i - 4) |= 0x80000000u;
        data[0] |= 1u;
    } while (sub_510d60(data, count, 0x14) == 0);
}
