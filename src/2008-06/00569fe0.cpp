// from server: 100% by king_originala
// roc 2008-06 00569fe0  unit: RBX::StandardOut  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00569fe0
//
// 00569fe0  56                   push esi
// 00569fe1  57                   push edi
// 00569fe2  8bf9                 mov edi, ecx
// 00569fe4  8b07                 mov eax, dword ptr [edi]
// 00569fe6  8b70f4               mov esi, dword ptr [eax - 0xc]
// 00569fe9  8b50f8               mov edx, dword ptr [eax - 8]
// 00569fec  b901000000           mov ecx, 1
// 00569ff1  2b48fc               sub ecx, dword ptr [eax - 4]
// 00569ff4  2bd6                 sub edx, esi
// 00569ff6  0bca                 or ecx, edx
// 00569ff8  7d08                 jge 0x56a002
// 00569ffa  56                   push esi
// 00569ffb  8bcf                 mov ecx, edi
// 00569ffd  e8fed3e9ff           call 0x407400
// 0056a002  8b07                 mov eax, dword ptr [edi]
// 0056a004  8d4e01               lea ecx, [esi + 1]
// 0056a007  51                   push ecx
// 0056a008  50                   push eax
// 0056a009  ff153c278000         call dword ptr [0x80273c]
// 0056a00f  50                   push eax
// 0056a010  e85bf8ffff           call 0x569870
// 0056a015  83c40c               add esp, 0xc
// 0056a018  85f6                 test esi, esi
// 0056a01a  7c15                 jl 0x56a031
// 0056a01c  8b07                 mov eax, dword ptr [edi]
// 0056a01e  3b70f8               cmp esi, dword ptr [eax - 8]
// 0056a021  7f0e                 jg 0x56a031
// 0056a023  8970f4               mov dword ptr [eax - 0xc], esi
// 0056a026  8b17                 mov edx, dword ptr [edi]
// 0056a028  8bc7                 mov eax, edi
// 0056a02a  5f                   pop edi
// 0056a02b  c6041600             mov byte ptr [esi + edx], 0
// 0056a02f  5e                   pop esi
// 0056a030  c3                   ret 
// 0056a031  6857000780           push 0x80070057
// 0056a036  e8c56fe9ff           call 0x401000

typedef long HRESULT;

namespace ATL {
    __declspec(noreturn) void __stdcall AtlThrowImpl(HRESULT hr);
}

extern "C" int (__cdecl *_mbslwr_s)(unsigned char *, unsigned int);
void __cdecl CheckError(int);

struct S {
    unsigned char *data;
    void PrepareWrite(int length);
    S &MakeLower();
};

S &S::MakeLower()
{
    int length = reinterpret_cast<int *>(data)[-3];

    if (((reinterpret_cast<int *>(data)[-2] - length) |
         (1 - reinterpret_cast<int *>(data)[-1])) < 0)
        PrepareWrite(length);

    unsigned char *buffer = data;
    unsigned int size = length + 1;
    CheckError(_mbslwr_s(buffer, size));

    if (length < 0 || length > reinterpret_cast<int *>(data)[-2])
        ATL::AtlThrowImpl((HRESULT)0x80070057L);

    reinterpret_cast<int *>(data)[-3] = length;
    data[length] = 0;
    return *this;
}
