// from server: 88% by colin
// roc 2007-08 00697aa0  unit: CXTPPropertyGridItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00697aa0
//
// 00697aa0  56                   push esi
// 00697aa1  57                   push edi
// 00697aa2  8bf9                 mov edi, ecx
// 00697aa4  8b8fb4000000         mov ecx, dword ptr [edi + 0xb4]
// 00697aaa  85c9                 test ecx, ecx
// 00697aac  7407                 je 0x697ab5
// 00697aae  6a00                 push 0
// 00697ab0  e83b420000           call 0x69bcf0
// 00697ab5  8b07                 mov eax, dword ptr [edi]
// 00697ab7  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 00697abd  8bcf                 mov ecx, edi
// 00697abf  ffd2                 call edx
// 00697ac1  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 00697ac7  e874d2f1ff           call 0x5b4d40
// 00697acc  8bf0                 mov esi, eax
// 00697ace  83ee01               sub esi, 1
// 00697ad1  781d                 js 0x697af0
// 00697ad3  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 00697ad9  56                   push esi
// 00697ada  e8b1f60500           call 0x6f7190
// 00697adf  8b10                 mov edx, dword ptr [eax]
// 00697ae1  8bc8                 mov ecx, eax
// 00697ae3  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 00697ae9  ffd0                 call eax
// 00697aeb  83ee01               sub esi, 1
// 00697aee  79e3                 jns 0x697ad3
// 00697af0  5f                   pop edi
// 00697af1  5e                   pop esi
// 00697af2  c3                   ret 

struct CXTPPropertyGridItem {
    void OnFinalRelease();
    void RemoveAll();
    void DeleteItem(int);
    int GetCount();
    void* GetAt(int);
};

extern "C" void __stdcall sub_69BCF0(int);
extern "C" int __stdcall sub_5B4D40(void*);
extern "C" void* __stdcall sub_6F7190(void*, int);

void CXTPPropertyGridItem::OnFinalRelease()
{
    if (*(int*)((char*)this + 0xb4) != 0) {
        sub_69BCF0(0);
    }
    void (__thiscall *pfn)(CXTPPropertyGridItem*) = *(void (__thiscall **)(CXTPPropertyGridItem*))((*(int*)this) + 0x9c);
    pfn(this);
    int n = sub_5B4D40(*(void**)((char*)this + 0xcc));
    int i = n - 1;
    if (i >= 0) {
        do {
            void* p = sub_6F7190(*(void**)((char*)this + 0xcc), i);
            void (__thiscall *pfn2)(void*) = *(void (__thiscall **)(void*))((*(int*)p) + 0x140);
            pfn2(p);
            i--;
        } while (i >= 0);
    }
}
