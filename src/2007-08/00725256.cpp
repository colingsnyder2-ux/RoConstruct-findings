// from server: 27% by colin
// roc 2007-08 00725256  unit: CXTIconHandle  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725256
//
// 00725256  55                   push ebp
// 00725257  8bec                 mov ebp, esp
// 00725259  56                   push esi
// 0072525a  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0072525d  57                   push edi
// 0072525e  ff7510               push dword ptr [ebp + 0x10]
// 00725261  83c608               add esi, 8
// 00725264  83e6f8               and esi, 0xfffffff8
// 00725267  8d450c               lea eax, [ebp + 0xc]
// 0072526a  56                   push esi
// 0072526b  50                   push eax
// 0072526c  8bf9                 mov edi, ecx
// 0072526e  e82dc5cdff           call 0x4017a0
// 00725273  83c40c               add esp, 0xc
// 00725276  85c0                 test eax, eax
// 00725278  7c2d                 jl 0x7252a7
// 0072527a  ff750c               push dword ptr [ebp + 0xc]
// 0072527d  8d450c               lea eax, [ebp + 0xc]
// 00725280  6a10                 push 0x10
// 00725282  50                   push eax
// 00725283  e828d6cdff           call 0x4028b0
// 00725288  83c40c               add esp, 0xc
// 0072528b  85c0                 test eax, eax
// 0072528d  7c18                 jl 0x7252a7
// 0072528f  ff750c               push dword ptr [ebp + 0xc]
// 00725292  8b4f04               mov ecx, dword ptr [edi + 4]
// 00725295  ff7508               push dword ptr [ebp + 8]
// 00725298  8b01                 mov eax, dword ptr [ecx]
// 0072529a  ff5008               call dword ptr [eax + 8]
// 0072529d  85c0                 test eax, eax
// 0072529f  7406                 je 0x7252a7
// 007252a1  4e                   dec esi
// 007252a2  897008               mov dword ptr [eax + 8], esi
// 007252a5  eb02                 jmp 0x7252a9
// 007252a7  33c0                 xor eax, eax
// 007252a9  5f                   pop edi
// 007252aa  5e                   pop esi
// 007252ab  5d                   pop ebp
// 007252ac  c20c00               ret 0xc

struct DomResourceIcon;

struct IconHandle {
    DomResourceIcon* m_domIcon;
    int compare(const IconHandle& rhs) const;
};

extern "C" int __cdecl sub_4017A0(void*, void*, void*);
extern "C" int __cdecl sub_4028B0(void*, void*, void*);

int IconHandle::compare(const IconHandle& rhs) const {
    int result;
    void* frame[4];
    frame[0] = (void*)0xffffffff;
    frame[1] = (void*)0x7252a7;
    frame[2] = (void*)0x7252a9;
    frame[3] = (void*)0;
    result = sub_4017A0(frame, (void*)0x725256, (void*)0x7252ac);
    if (result < 0) {
        return 0;
    }
    result = sub_4028B0(frame, (void*)0x10, (void*)0x725256);
    if (result < 0) {
        return 0;
    }
    return 0;
}
