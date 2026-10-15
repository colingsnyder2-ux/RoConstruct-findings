// roc 2008-06 0046f9f0  unit: RBX::LDraw2Lua::LuaWriter  size: 543 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046f9f0
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
//
// 0046f9f0  83ec24               sub esp, 0x24
// 0046f9f3  53                   push ebx
// 0046f9f4  55                   push ebp
// 0046f9f5  56                   push esi
// 0046f9f6  57                   push edi
// 0046f9f7  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0046f9fb  8d44241c             lea eax, [esp + 0x1c]
// 0046f9ff  50                   push eax
// 0046fa00  8bcf                 mov ecx, edi
// 0046fa02  ff1594248000         call dword ptr [0x802494]
// 0046fa08  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0046fa0c  8d4c2414             lea ecx, [esp + 0x14]
// 0046fa10  51                   push ecx
// 0046fa11  8bcd                 mov ecx, ebp
// 0046fa13  ff1594248000         call dword ptr [0x802494]
// 0046fa19  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0046fa1f  90                   nop 
// 0046fa20  8d542424             lea edx, [esp + 0x24]
// 0046fa24  52                   push edx
// 0046fa25  8bcf                 mov ecx, edi
// 0046fa27  ff1590248000         call dword ptr [0x802490]
// 0046fa2d  8bf0                 mov esi, eax
// 0046fa2f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0046fa33  83f8fc               cmp eax, -4
// 0046fa36  740a                 je 0x46fa42
// 0046fa38  85c0                 test eax, eax
// 0046fa3a  7404                 je 0x46fa40
// 0046fa3c  3b06                 cmp eax, dword ptr [esi]
// 0046fa3e  7402                 je 0x46fa42
// 0046fa40  ffd3                 call ebx
// 0046fa42  8b442420             mov eax, dword ptr [esp + 0x20]
// 0046fa46  3b4604               cmp eax, dword ptr [esi + 4]
// 0046fa49  0f8492010000         je 0x46fbe1
// 0046fa4f  8d4c242c             lea ecx, [esp + 0x2c]
// 0046fa53  51                   push ecx
// 0046fa54  8bcd                 mov ecx, ebp
// 0046fa56  ff1590248000         call dword ptr [0x802490]
// 0046fa5c  8bf0                 mov esi, eax
// 0046fa5e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046fa62  83f8fc               cmp eax, -4
// 0046fa65  740e                 je 0x46fa75
// 0046fa67  85c0                 test eax, eax
// 0046fa69  7404                 je 0x46fa6f
// 0046fa6b  3b06                 cmp eax, dword ptr [esi]
// 0046fa6d  7406                 je 0x46fa75
// 0046fa6f  ffd3                 call ebx
// 0046fa71  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046fa75  8b542418             mov edx, dword ptr [esp + 0x18]
// 0046fa79  3b5604               cmp edx, dword ptr [esi + 4]
// 0046fa7c  0f845f010000         je 0x46fbe1
// 0046fa82  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046fa86  83f9fc               cmp ecx, -4
// 0046fa89  7423                 je 0x46faae
// 0046fa8b  85c9                 test ecx, ecx
// 0046fa8d  7506                 jne 0x46fa95
// 0046fa8f  ffd3                 call ebx
// 0046fa91  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046fa95  ff1558238000         call dword ptr [0x802358]
// 0046fa9b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046fa9f  034114               add eax, dword ptr [ecx + 0x14]
// 0046faa2  39442420             cmp dword ptr [esp + 0x20], eax
// 0046faa6  7202                 jb 0x46faaa
// 0046faa8  ffd3                 call ebx
// 0046faaa  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046faae  8b742420             mov esi, dword ptr [esp + 0x20]
// 0046fab2  83f8fc               cmp eax, -4
// 0046fab5  7421                 je 0x46fad8
// 0046fab7  85c0                 test eax, eax
// 0046fab9  7506                 jne 0x46fac1
// 0046fabb  ffd3                 call ebx
// 0046fabd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046fac1  8bc8                 mov ecx, eax
// 0046fac3  ff1558238000         call dword ptr [0x802358]
// 0046fac9  8b542414             mov edx, dword ptr [esp + 0x14]
// 0046facd  034214               add eax, dword ptr [edx + 0x14]
// 0046fad0  39442418             cmp dword ptr [esp + 0x18], eax
// 0046fad4  7202                 jb 0x46fad8
// 0046fad6  ffd3                 call ebx
// 0046fad8  8b442418             mov eax, dword ptr [esp + 0x18]
// 0046fadc  0fbe08               movsx ecx, byte ptr [eax]
// 0046fadf  51                   push ecx
// 0046fae0  ff15f8278000         call dword ptr [0x8027f8]
// 0046fae6  0fbe16               movsx edx, byte ptr [esi]
// 0046fae9  52                   push edx
// 0046faea  89442418             mov dword ptr [esp + 0x18], eax
// 0046faee  ff15f8278000         call dword ptr [0x8027f8]
// 0046faf4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046faf8  83c408               add esp, 8
// 0046fafb  3bc1                 cmp eax, ecx
// 0046fafd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046fb01  755e                 jne 0x46fb61
// 0046fb03  83f9fc               cmp ecx, -4
// 0046fb06  741f                 je 0x46fb27
// 0046fb08  85c9                 test ecx, ecx
// 0046fb0a  7506                 jne 0x46fb12
// 0046fb0c  ffd3                 call ebx
// 0046fb0e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046fb12  ff1558238000         call dword ptr [0x802358]
// 0046fb18  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046fb1c  034114               add eax, dword ptr [ecx + 0x14]
// 0046fb1f  39442420             cmp dword ptr [esp + 0x20], eax
// 0046fb23  7202                 jb 0x46fb27
// 0046fb25  ffd3                 call ebx
// 0046fb27  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0046fb2b  be01000000           mov esi, 1
// 0046fb30  01742420             add dword ptr [esp + 0x20], esi
// 0046fb34  83f9fc               cmp ecx, -4
// 0046fb37  741f                 je 0x46fb58
// 0046fb39  85c9                 test ecx, ecx
// 0046fb3b  7506                 jne 0x46fb43
// 0046fb3d  ffd3                 call ebx
// 0046fb3f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0046fb43  ff1558238000         call dword ptr [0x802358]
// 0046fb49  8b542414             mov edx, dword ptr [esp + 0x14]
// 0046fb4d  034214               add eax, dword ptr [edx + 0x14]
// 0046fb50  39442418             cmp dword ptr [esp + 0x18], eax
// 0046fb54  7202                 jb 0x46fb58
// 0046fb56  ffd3                 call ebx
// 0046fb58  01742418             add dword ptr [esp + 0x18], esi
// 0046fb5c  e9bffeffff           jmp 0x46fa20
// 0046fb61  83f9fc               cmp ecx, -4
// 0046fb64  741f                 je 0x46fb85
// 0046fb66  85c9                 test ecx, ecx
// 0046fb68  7506                 jne 0x46fb70
// 0046fb6a  ffd3                 call ebx
// 0046fb6c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046fb70  ff1558238000         call dword ptr [0x802358]
// 0046fb76  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046fb7a  034114               add eax, dword ptr [ecx + 0x14]
// 0046fb7d  39442420             cmp dword ptr [esp + 0x20], eax
// 0046fb81  7202                 jb 0x46fb85
// 0046fb83  ffd3                 call ebx
// 0046fb85  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0046fb89  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0046fb8d  83f9fc               cmp ecx, -4
// 0046fb90  741f                 je 0x46fbb1
// 0046fb92  85c9                 test ecx, ecx
// 0046fb94  7506                 jne 0x46fb9c
// 0046fb96  ffd3                 call ebx
// 0046fb98  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0046fb9c  ff1558238000         call dword ptr [0x802358]
// 0046fba2  8b542414             mov edx, dword ptr [esp + 0x14]
// 0046fba6  034214               add eax, dword ptr [edx + 0x14]
// 0046fba9  39442418             cmp dword ptr [esp + 0x18], eax
// 0046fbad  7202                 jb 0x46fbb1
// 0046fbaf  ffd3                 call ebx
// 0046fbb1  0fbe07               movsx eax, byte ptr [edi]
// 0046fbb4  8b3df8278000         mov edi, dword ptr [0x8027f8]
// 0046fbba  8b742418             mov esi, dword ptr [esp + 0x18]
// 0046fbbe  50                   push eax
// 0046fbbf  ffd7                 call edi
// 0046fbc1  0fbe0e               movsx ecx, byte ptr [esi]
// 0046fbc4  51                   push ecx
// 0046fbc5  8bd8                 mov ebx, eax
// 0046fbc7  ffd7                 call edi
// 0046fbc9  83c408               add esp, 8
// 0046fbcc  33d2                 xor edx, edx
// 0046fbce  3bd8                 cmp ebx, eax
// 0046fbd0  0f9dc2               setge dl
// 0046fbd3  5f                   pop edi
// 0046fbd4  5e                   pop esi
// 0046fbd5  5d                   pop ebp
// 0046fbd6  5b                   pop ebx
// 0046fbd7  8d5412ff             lea edx, [edx + edx - 1]
// 0046fbdb  8bc2                 mov eax, edx
// 0046fbdd  83c424               add esp, 0x24
// 0046fbe0  c3                   ret 
// 0046fbe1  8bcf                 mov ecx, edi
// 0046fbe3  ff15f4238000         call dword ptr [0x8023f4]
// 0046fbe9  8bcd                 mov ecx, ebp
// 0046fbeb  8bf0                 mov esi, eax
// 0046fbed  ff15f4238000         call dword ptr [0x8023f4]
// 0046fbf3  3bf0                 cmp esi, eax
// 0046fbf5  750a                 jne 0x46fc01
// 0046fbf7  5f                   pop edi
// 0046fbf8  5e                   pop esi
// 0046fbf9  5d                   pop ebp
// 0046fbfa  33c0                 xor eax, eax
// 0046fbfc  5b                   pop ebx
// 0046fbfd  83c424               add esp, 0x24
// 0046fc00  c3                   ret 
// 0046fc01  5f                   pop edi
// 0046fc02  1bc0                 sbb eax, eax
// 0046fc04  5e                   pop esi
// 0046fc05  83e0fe               and eax, 0xfffffffe
// 0046fc08  5d                   pop ebp
// 0046fc09  40                   inc eax
// 0046fc0a  5b                   pop ebx
// 0046fc0b  83c424               add esp, 0x24
// 0046fc0e  c3                   ret 

#include <string>
#include <cctype>

int compareNoCase(const std::string& a, const std::string& b)
{
    std::string::const_iterator ai = a.begin();
    std::string::const_iterator bi = b.begin();
    while (ai != a.end() && bi != b.end())
    {
        if (toupper(*ai) != toupper(*bi))
            return toupper(*ai) < toupper(*bi) ? -1 : 1;
        ++ai;
        ++bi;
    }
    if (a.size() == b.size())
        return 0;
    return a.size() < b.size() ? -1 : 1;
}
