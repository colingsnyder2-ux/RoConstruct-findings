// from server: 41% by colin
// roc 2007-08 0059d040  unit: ChatEnter  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d040
//
// 0059d040  6aff                 push -1
// 0059d042  68397a7500           push 0x757a39
// 0059d047  64a100000000         mov eax, dword ptr fs:[0]
// 0059d04d  50                   push eax
// 0059d04e  64892500000000       mov dword ptr fs:[0], esp
// 0059d055  51                   push ecx
// 0059d056  56                   push esi
// 0059d057  8bf1                 mov esi, ecx
// 0059d059  57                   push edi
// 0059d05a  89742408             mov dword ptr [esp + 8], esi
// 0059d05e  ff15a4e67700         call dword ptr [0x77e6a4]
// 0059d064  33ff                 xor edi, edi
// 0059d066  897c2414             mov dword ptr [esp + 0x14], edi
// 0059d06a  e8c1faf8ff           call 0x52cb30
// 0059d06f  d9ee                 fldz 
// 0059d071  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059d075  89461c               mov dword ptr [esi + 0x1c], eax
// 0059d078  d95630               fst dword ptr [esi + 0x30]
// 0059d07b  897e20               mov dword ptr [esi + 0x20], edi
// 0059d07e  d95e34               fstp dword ptr [esi + 0x34]
// 0059d081  897e24               mov dword ptr [esi + 0x24], edi
// 0059d084  897e28               mov dword ptr [esi + 0x28], edi
// 0059d087  897e2c               mov dword ptr [esi + 0x2c], edi
// 0059d08a  5f                   pop edi
// 0059d08b  8bc6                 mov eax, esi
// 0059d08d  5e                   pop esi
// 0059d08e  64890d00000000       mov dword ptr fs:[0], ecx
// 0059d095  83c410               add esp, 0x10
// 0059d098  c3                   ret 

struct ChatEnter {
    char pad0[0x1c];
    int m_field1c;
    int m_field20;
    int m_field24;
    int m_field28;
    int m_field2c;
    float m_field30;
    float m_field34;
    ChatEnter* construct();
};

extern "C" int __stdcall sub_52cb30();
extern "C" void __stdcall sub_77e6a4();

ChatEnter* ChatEnter::construct()
{
    sub_77e6a4();
    m_field1c = sub_52cb30();
    m_field30 = 0.0f;
    m_field20 = 0;
    m_field34 = 0.0f;
    m_field24 = 0;
    m_field28 = 0;
    m_field2c = 0;
    return this;
}
