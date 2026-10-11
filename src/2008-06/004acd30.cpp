// from server: 65% by colin
// roc 2008-06 004acd30  unit: RBX::Network::Replicator::ChangePropertyItem  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004acd30
//
// 004acd30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004acd34  83ec0c               sub esp, 0xc
// 004acd37  8d0424               lea eax, [esp]
// 004acd3a  50                   push eax
// 004acd3b  e890ffffff           call 0x4accd0
// 004acd40  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004acd44  50                   push eax
// 004acd45  51                   push ecx
// 004acd46  e8559cffff           call 0x4a69a0
// 004acd4b  83c414               add esp, 0x14
// 004acd4e  c3                   ret 

struct ChangePropertyItem
{
    void __cdecl Process(int a);
};

extern "C" void __stdcall sub_4ACCd0(void *out);
extern "C" void __stdcall sub_4A69A0(void *a, void *b);

void ChangePropertyItem::Process(int a)
{
    char buf[12];
    sub_4ACCd0(buf);
    sub_4A69A0(*(void **)&buf[0], (void *)a);
}
