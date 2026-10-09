// from server: 89% by colin
// roc 2007-08 0042ed20  unit: CWrapperView  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042ed20
//
// 0042ed20  8b442404             mov eax, dword ptr [esp + 4]
// 0042ed24  53                   push ebx
// 0042ed25  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0042ed29  55                   push ebp
// 0042ed2a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0042ed2e  56                   push esi
// 0042ed2f  57                   push edi
// 0042ed30  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0042ed34  57                   push edi
// 0042ed35  53                   push ebx
// 0042ed36  55                   push ebp
// 0042ed37  50                   push eax
// 0042ed38  8bf1                 mov esi, ecx
// 0042ed3a  e8fb122000           call 0x63003a
// 0042ed3f  85c0                 test eax, eax
// 0042ed41  740c                 je 0x42ed4f
// 0042ed43  5f                   pop edi
// 0042ed44  5e                   pop esi
// 0042ed45  5d                   pop ebp
// 0042ed46  b801000000           mov eax, 1
// 0042ed4b  5b                   pop ebx
// 0042ed4c  c21000               ret 0x10
// 0042ed4f  8b5658               mov edx, dword ptr [esi + 0x58]
// 0042ed52  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042ed56  8b5214               mov edx, dword ptr [edx + 0x14]
// 0042ed59  57                   push edi
// 0042ed5a  53                   push ebx
// 0042ed5b  8d4e58               lea ecx, [esi + 0x58]
// 0042ed5e  55                   push ebp
// 0042ed5f  50                   push eax
// 0042ed60  ffd2                 call edx
// 0042ed62  5f                   pop edi
// 0042ed63  5e                   pop esi
// 0042ed64  5d                   pop ebp
// 0042ed65  5b                   pop ebx
// 0042ed66  c21000               ret 0x10

struct CWrapperView {
    char pad[0x58];
    void* field_58;
    int sub_42ED20(int, int, int, int);
};

extern "C" int __stdcall sub_63003A(int, int, int, int);

int CWrapperView::sub_42ED20(int a, int b, int c, int d) {
    if (sub_63003A(a, b, c, d)) {
        return 1;
    }
    void** vt = (void**)(*(void**)((char*)this + 0x58));
    int (__stdcall *fn)(void*, int, int, int, int) = (int (__stdcall *)(void*, int, int, int, int))vt[5];
    return fn((char*)this + 0x58, a, b, c, d);
}
