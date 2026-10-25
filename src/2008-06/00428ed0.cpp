// from server: 100% by king_originala
// roc 2008-06 00428ed0  unit: MainLogManager  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00428ed0
//
// 00428ed0  6848010000           push 0x148
// 00428ed5  e8467a2700           call 0x6a0920
// 00428eda  83c404               add esp, 4
// 00428edd  85c0                 test eax, eax
// 00428edf  7406                 je 0x428ee7
// 00428ee1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00428ee5  8908                 mov dword ptr [eax], ecx
// 00428ee7  8d4804               lea ecx, [eax + 4]
// 00428eea  85c9                 test ecx, ecx
// 00428eec  7406                 je 0x428ef4
// 00428eee  8b542408             mov edx, dword ptr [esp + 8]
// 00428ef2  8911                 mov dword ptr [ecx], edx
// 00428ef4  57                   push edi
// 00428ef5  8d7808               lea edi, [eax + 8]
// 00428ef8  85ff                 test edi, edi
// 00428efa  740d                 je 0x428f09
// 00428efc  56                   push esi
// 00428efd  8b742414             mov esi, dword ptr [esp + 0x14]
// 00428f01  b950000000           mov ecx, 0x50
// 00428f06  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00428f08  5e                   pop esi
// 00428f09  5f                   pop edi
// 00428f0a  c20c00               ret 0xc

extern char* __cdecl allocate(unsigned int);

struct Block
{
    unsigned int data[80];
};

char* __stdcall func_00428ed0(unsigned int a, unsigned int b, const Block* source)
{
    char* p = allocate(0x148);
    if (p)
        *reinterpret_cast<unsigned int*>(p) = a;

    unsigned int* q = reinterpret_cast<unsigned int*>(p + 4);
    if (q)
        *q = b;

    Block* r = reinterpret_cast<Block*>(p + 8);
    if (r)
        *r = *source;

    return p;
}
