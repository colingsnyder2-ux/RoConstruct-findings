// from server: 87% by colin
// from server: 76% by king_originala
// roc 2008-06 0046ac90  unit: VCWorkspace::?$CComObject  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046ac90
//
// 0046ac90  55                   push ebp
// 0046ac91  8bec                 mov ebp, esp
// 0046ac93  6aff                 push -1
// 0046ac95  68d0387c00           push 0x7c38d0
// 0046ac9a  64a100000000         mov eax, dword ptr fs:[0]
// 0046aca0  50                   push eax
// 0046aca1  64892500000000       mov dword ptr fs:[0], esp
// 0046aca8  83ec10               sub esp, 0x10
// 0046acab  8b4508               mov eax, dword ptr [ebp + 8]
// 0046acae  53                   push ebx
// 0046acaf  56                   push esi
// 0046acb0  57                   push edi
// 0046acb1  33ff                 xor edi, edi
// 0046acb3  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046acb6  3bc7                 cmp eax, edi
// 0046acb8  7518                 jne 0x46acd2
// 0046acba  b803400080           mov eax, 0x80004003
// 0046acbf  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0046acc2  64890d00000000       mov dword ptr fs:[0], ecx
// 0046acc9  5f                   pop edi
// 0046acca  5e                   pop esi
// 0046accb  5b                   pop ebx
// 0046accc  8be5                 mov esp, ebp
// 0046acce  5d                   pop ebp
// 0046accf  c20400               ret 4
// 0046acd2  bb0e000780           mov ebx, 0x8007000e
// 0046acd7  6894000000           push 0x94
// 0046acdc  8938                 mov dword ptr [eax], edi
// 0046acde  895dec               mov dword ptr [ebp - 0x14], ebx
// 0046ace1  897de8               mov dword ptr [ebp - 0x18], edi
// 0046ace4  897dfc               mov dword ptr [ebp - 4], edi
// 0046ace7  e8345c2300           call 0x6a0920
// 0046acec  8bf0                 mov esi, eax
// 0046acee  83c404               add esp, 4
// 0046acf1  3bf7                 cmp esi, edi
// 0046acf3  743a                 je 0x46ad2f
// 0046acf5  6a01                 push 1
// 0046acf7  6a03                 push 3
// 0046acf9  8d4e0c               lea ecx, [esi + 0xc]
// 0046acfc  897e08               mov dword ptr [esi + 8], edi
// 0046acff  ff1528248000         call dword ptr [0x802428]
// 0046ad05  c706bcea8000         mov dword ptr [esi], 0x80eabc
// 0046ad0b  c7460498ea8000       mov dword ptr [esi + 4], 0x80ea98
// 0046ad12  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0046ad18  8b01                 mov eax, dword ptr [ecx]
// 0046ad1a  8b5004               mov edx, dword ptr [eax + 4]
// 0046ad1d  ffd2                 call edx
// 0046ad1f  8bc6                 mov eax, esi
// 0046ad21  3bc7                 cmp eax, edi
// 0046ad23  7422                 je 0x46ad47
// 0046ad25  ff4008               inc dword ptr [eax + 8]
// 0046ad28  33db                 xor ebx, ebx
// 0046ad2a  ff4808               dec dword ptr [eax + 8]
// 0046ad2d  eb18                 jmp 0x46ad47
// 0046ad2f  33c0                 xor eax, eax
// 0046ad31  ebee                 jmp 0x46ad21

#include <intrin.h>
typedef long HRESULT;

void* __cdecl operator new(unsigned int);
inline void* __cdecl operator new(unsigned int, void* address) { return address; }

struct Stream {
    char storage[0x88];
    __declspec(dllimport) Stream(int, int) throw();
};

struct Service {
    virtual void unused() = 0;
    virtual void notify() = 0;
};

extern Service* service;
extern void* primaryTable[];
extern void* secondaryTable[];

struct AtlException {
    HRESULT result;
};

struct Object {
    void** primary;
    void** secondary;
    long references;
    Stream stream;

    Object() throw() : references(0), stream(3, 1)
    {
        primary = primaryTable;
        secondary = secondaryTable;
        service->notify();
    }

    static HRESULT __stdcall CreateInstance(Object** output);
};

HRESULT __stdcall Object::CreateInstance(Object** output)
{
    if (!output)
        return (HRESULT)0x80004003L;

    *output = 0;
    HRESULT result = (HRESULT)0x8007000EL;
    Object* object = 0;

    try {
        object = new Object();

        _ReadWriteBarrier();
        if (object != 0) {
            ++object->references;
            _ReadWriteBarrier();
            result = 0;
            --object->references;
        }
    }
    catch (const AtlException& exception) {
        result = exception.result;
    }
    catch (...) {
        result = (HRESULT)0x8007000EL;
    }

    *output = object;
    return result;
}
