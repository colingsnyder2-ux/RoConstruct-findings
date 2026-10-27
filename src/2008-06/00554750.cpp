// from server: 100% by king_originala
// roc 2008-06 00554750  unit: RBX::RunService  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554750
//
// 00554750  55                   push ebp
// 00554751  8bec                 mov ebp, esp
// 00554753  6aff                 push -1
// 00554755  68e1dc7c00           push 0x7cdce1
// 0055475a  64a100000000         mov eax, dword ptr fs:[0]
// 00554760  50                   push eax
// 00554761  64892500000000       mov dword ptr fs:[0], esp
// 00554768  83ec2c               sub esp, 0x2c
// 0055476b  53                   push ebx
// 0055476c  56                   push esi
// 0055476d  33c0                 xor eax, eax
// 0055476f  57                   push edi
// 00554770  8965f0               mov dword ptr [ebp - 0x10], esp
// 00554773  8945fc               mov dword ptr [ebp - 4], eax
// 00554776  3bc8                 cmp ecx, eax
// 00554778  7406                 je 0x554780
// 0055477a  8d8170feffff         lea eax, [ecx - 0x190]
// 00554780  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00554783  8b7508               mov esi, dword ptr [ebp + 8]
// 00554786  8b11                 mov edx, dword ptr [ecx]
// 00554788  56                   push esi
// 00554789  50                   push eax
// 0055478a  8b02                 mov eax, dword ptr [edx]
// 0055478c  ffd0                 call eax
// 0055478e  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00554791  5f                   pop edi
// 00554792  5e                   pop esi
// 00554793  64890d00000000       mov dword ptr fs:[0], ecx
// 0055479a  5b                   pop ebx
// 0055479b  8be5                 mov esp, ebp
// 0055479d  5d                   pop ebp
// 0055479e  c20800               ret 8
// 005547a1  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 005547a4  8b11                 mov edx, dword ptr [ecx]
// 005547a6  8b4204               mov eax, dword ptr [edx + 4]
// 005547a9  ffd0                 call eax
// 005547ab  50                   push eax
// 005547ac  8d4dc8               lea ecx, [ebp - 0x38]
// 005547af  ff1558248000         call dword ptr [0x802458]
// 005547b5  8d4de4               lea ecx, [ebp - 0x1c]
// 005547b8  bb02000000           mov ebx, 2
// 005547bd  51                   push ecx
// 005547be  885dfc               mov byte ptr [ebp - 4], bl
// 005547c1  e85a4e0100           call 0x569620
// 005547c6  83c404               add esp, 4
// 005547c9  837de010             cmp dword ptr [ebp - 0x20], 0x10
// 005547cd  8b4dcc               mov ecx, dword ptr [ebp - 0x34]
// 005547d0  c645fc03             mov byte ptr [ebp - 4], 3
// 005547d4  7303                 jae 0x5547d9
// 005547d6  8d4dcc               lea ecx, [ebp - 0x34]
// 005547d9  8b00                 mov eax, dword ptr [eax]
// 005547db  51                   push ecx
// 005547dc  68c4b98000           push 0x80b9c4
// 005547e1  53                   push ebx
// 005547e2  50                   push eax
// 005547e3  e8b84b0100           call 0x5693a0
// 005547e8  83c410               add esp, 0x10
// 005547eb  8d4de4               lea ecx, [ebp - 0x1c]
// 005547ee  885dfc               mov byte ptr [ebp - 4], bl
// 005547f1  e86abe0a00           call 0x600660
// 005547f6  8d4dc8               lea ecx, [ebp - 0x38]
// 005547f9  c645fc01             mov byte ptr [ebp - 4], 1
// 005547fd  ff1568248000         call dword ptr [0x802468]
// 00554803  b88e475500           mov eax, 0x55478e
// 00554808  c3                   ret 

#include <string>
#include <exception>
struct StandardOut {
    void print(int, const char *, ...);
};

struct OutHandle {
    StandardOut *pointer;
    void *count;
    ~OutHandle();
    StandardOut *operator->() const { return pointer; }
};

OutHandle __cdecl singleton();


// from server: 100% by Gemini
// roc 2008-06 00554750  unit: RBX::RunService  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554750
//
// 00554750  55                   push ebp
// 00554751  8bec                 mov ebp, esp
// 00554753  6aff                 push -1
// 00554755  68e1dc7c00           push 0x7cdce1
// 0055475a  64a100000000         mov eax, dword ptr fs:[0]
// 00554760  50                   push eax
// 00554761  64892500000000       mov dword ptr fs:[0], esp
// 00554768  83ec2c               sub esp, 0x2c
// 0055476b  53                   push ebx
// 0055476c  56                   push esi
// 0055476d  33c0                 xor eax, eax
// 0055476f  57                   push edi
// 00554770  8965f0               mov dword ptr [ebp - 0x10], esp
// 00554773  8945fc               mov dword ptr [ebp - 4], eax
// 00554776  3bc8                 cmp ecx, eax
// 00554778  7406                 je 0x554780
// 0055477a  8d8170feffff         lea eax, [ecx - 0x190]
// 00554780  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00554783  8b7508               mov esi, dword ptr [ebp + 8]
// 00554786  8b11                 mov edx, dword ptr [ecx]
// 00554788  56                   push esi
// 00554789  50                   push eax
// 0055478a  8b02                 mov eax, dword ptr [edx]
// 0055478c  ffd0                 call eax

struct Callback {
    virtual void invoke(void *, void *) = 0;
};

struct S {
    void f(void *, Callback *);
};

void S::f(void *a, Callback *callback)
{
    try {
        void *owner = 0;
        if (this)
            owner = reinterpret_cast<char *>(this) - 0x190;
        callback->invoke(owner, a);
    }
    catch (std::exception& error) {
        std::string what(error.what());
        singleton()->print(2, "Exception caught in onEvent. %s", what.c_str());
    }
}
