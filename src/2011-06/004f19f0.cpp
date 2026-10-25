// from server: 100% by tester
// roc 2011-06 004f19f0  unit: RBX::Network::IdSerializer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f19f0
//
// 004f19f0  56                   push esi
// 004f19f1  8b742408             mov esi, dword ptr [esp + 8]
// 004f19f5  57                   push edi
// 004f19f6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004f19fa  0fb707               movzx eax, word ptr [edi]
// 004f19fd  50                   push eax
// 004f19fe  56                   push esi
// 004f19ff  e88cffffff           call 0x4f1990
// 004f1a04  0fb74f02             movzx ecx, word ptr [edi + 2]
// 004f1a08  51                   push ecx
// 004f1a09  56                   push esi
// 004f1a0a  e881ffffff           call 0x4f1990
// 004f1a0f  83c410               add esp, 0x10
// 004f1a12  5f                   pop edi
// 004f1a13  8bc6                 mov eax, esi
// 004f1a15  5e                   pop esi
// 004f1a16  c3                   ret 

struct WordPair
{
    unsigned short first;
    unsigned short second;
};

extern "C" void __cdecl sub_4e1aa0(void*, unsigned short);

void* __cdecl function_004e1b00(void* value, const WordPair* pair)
{
    sub_4e1aa0(value, pair->first);
    sub_4e1aa0(value, pair->second);
    return value;
}
