// from server: 66% by colin
// roc 2007-08 005dfa70  unit: RBX::VMotorFeature::?$FactoryProduct  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dfa70
//
// 005dfa70  56                   push esi
// 005dfa71  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005dfa75  57                   push edi
// 005dfa76  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005dfa7a  2bf7                 sub esi, edi
// 005dfa7c  8bc6                 mov eax, esi
// 005dfa7e  c1f802               sar eax, 2
// 005dfa81  83f801               cmp eax, 1
// 005dfa84  7e2a                 jle 0x5dfab0
// 005dfa86  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 005dfa8a  8b0f                 mov ecx, dword ptr [edi]
// 005dfa8c  50                   push eax
// 005dfa8d  8d56fc               lea edx, [esi - 4]
// 005dfa90  c1fa02               sar edx, 2
// 005dfa93  52                   push edx
// 005dfa94  6a00                 push 0
// 005dfa96  57                   push edi
// 005dfa97  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 005dfa9b  e870eaffff           call 0x5de510
// 005dfaa0  83ee04               sub esi, 4
// 005dfaa3  8bc6                 mov eax, esi
// 005dfaa5  c1f802               sar eax, 2
// 005dfaa8  83c410               add esp, 0x10
// 005dfaab  83f801               cmp eax, 1
// 005dfaae  7fd6                 jg 0x5dfa86
// 005dfab0  5f                   pop edi
// 005dfab1  5e                   pop esi
// 005dfab2  c3                   ret 

extern "C" void __cdecl sub_005DE510(int, int, int, int);

void __cdecl sub_005DFA70(int* first, int* last)
{
    int diff = (int)last - (int)first;
    int count = diff >> 2;
    if (count > 1)
    {
        do
        {
            int tmp = *(int*)((char*)first + diff - 4);
            int val = *first;
            int idx = (diff - 4) >> 2;
            *(int*)((char*)first + diff - 4) = val;
            sub_005DE510((int)first, 0, idx, tmp);
            diff -= 4;
            count = diff >> 2;
        } while (count > 1);
    }
}
