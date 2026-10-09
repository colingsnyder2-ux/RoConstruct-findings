// from server: 55% by colin
// roc 2007-08 005fefb0  unit: RBX::UndoVerb  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fefb0
//
// 005fefb0  51                   push ecx
// 005fefb1  53                   push ebx
// 005fefb2  56                   push esi
// 005fefb3  8bd9                 mov ebx, ecx
// 005fefb5  8b730c               mov esi, dword ptr [ebx + 0xc]
// 005fefb8  81c660010000         add esi, 0x160
// 005fefbe  57                   push edi
// 005fefbf  8b7e04               mov edi, dword ptr [esi + 4]
// 005fefc2  8d47ff               lea eax, [edi - 1]
// 005fefc5  894604               mov dword ptr [esi + 4], eax
// 005fefc8  8b460c               mov eax, dword ptr [esi + 0xc]
// 005fefcb  85c0                 test eax, eax
// 005fefcd  741a                 je 0x5fefe9
// 005fefcf  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005fefd2  2bc8                 sub ecx, eax
// 005fefd4  b8398ee338           mov eax, 0x38e38e39
// 005fefd9  f7e9                 imul ecx
// 005fefdb  c1fa03               sar edx, 3
// 005fefde  8bc2                 mov eax, edx
// 005fefe0  c1e81f               shr eax, 0x1f
// 005fefe3  03c2                 add eax, edx
// 005fefe5  3bf8                 cmp edi, eax
// 005fefe7  7206                 jb 0x5fefef
// 005fefe9  ff15d8e67700         call dword ptr [0x77e6d8]
// 005fefef  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 005feff2  8b460c               mov eax, dword ptr [esi + 0xc]
// 005feff5  51                   push ecx
// 005feff6  8d14ff               lea edx, [edi + edi*8]
// 005feff9  8b4c901c             mov ecx, dword ptr [eax + edx*4 + 0x1c]
// 005feffd  83c108               add ecx, 8
// 005ff000  51                   push ecx
// 005ff001  8d4c2414             lea ecx, [esp + 0x14]
// 005ff005  e8e6b8f6ff           call 0x56a8f0
// 005ff00a  5f                   pop edi
// 005ff00b  5e                   pop esi
// 005ff00c  5b                   pop ebx
// 005ff00d  59                   pop ecx
// 005ff00e  c20400               ret 4

struct VerbContainer {
    char pad[0x160];
    int refCount;
    char pad2[4];
    int begin;
    int end;
};

struct UndoVerb {
    char pad[0xc];
    VerbContainer* container;
    void doIt(void* dataState);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" void __stdcall sub_56a8f0(void* dst, void* src, int unused);

void UndoVerb::doIt(void* dataState)
{
    VerbContainer* c = container;
    int old = c->refCount;
    c->refCount = old - 1;
    if (c->begin != 0) {
        int count = (c->end - c->begin) / 36;
        if (old < count) {
            _invalid_parameter_noinfo();
        }
    } else {
        _invalid_parameter_noinfo();
    }
    int idx = old * 9;
    int* p = (int*)(c->begin + idx * 4 + 0x1c);
    sub_56a8f0(&dataState, (void*)((char*)p + 8), 0);
}
