// from server: 72% by colin
// roc 2007-08 00643ea0  unit: CXTPCommandBar  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643ea0
//
// 00643ea0  56                   push esi
// 00643ea1  57                   push edi
// 00643ea2  8bf1                 mov esi, ecx
// 00643ea4  33d2                 xor edx, edx
// 00643ea6  e89576e3ff           call 0x47b540
// 00643eab  85c0                 test eax, eax
// 00643ead  7e1e                 jle 0x643ecd
// 00643eaf  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00643eb3  52                   push edx
// 00643eb4  8bce                 mov ecx, esi
// 00643eb6  e865ccdeff           call 0x430b20
// 00643ebb  3bc7                 cmp eax, edi
// 00643ebd  7415                 je 0x643ed4
// 00643ebf  8bce                 mov ecx, esi
// 00643ec1  83c201               add edx, 1
// 00643ec4  e87776e3ff           call 0x47b540
// 00643ec9  3bd0                 cmp edx, eax
// 00643ecb  7ce6                 jl 0x643eb3
// 00643ecd  5f                   pop edi
// 00643ece  33c0                 xor eax, eax
// 00643ed0  5e                   pop esi
// 00643ed1  c20400               ret 4
// 00643ed4  5f                   pop edi
// 00643ed5  b801000000           mov eax, 1
// 00643eda  5e                   pop esi
// 00643edb  c20400               ret 4

struct CXTPCommandBar
{
    int GetCount();
    int GetAt(int index);
    int Find(int item);
};

int CXTPCommandBar::Find(int item)
{
    int i = 0;
    if (GetCount() > 0)
    {
        do
        {
            if (GetAt(i) == item)
                return 1;
            i++;
        } while (i < GetCount());
    }
    return 0;
}
