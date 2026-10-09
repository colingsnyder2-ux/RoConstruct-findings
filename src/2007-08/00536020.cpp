// from server: 38% by colin
// roc 2007-08 00536020  unit: RBX::Lua::VFunctionRef::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00536020
//
// 00536020  6aff                 push -1
// 00536022  681bb67500           push 0x75b61b
// 00536027  64a100000000         mov eax, dword ptr fs:[0]
// 0053602d  50                   push eax
// 0053602e  64892500000000       mov dword ptr fs:[0], esp
// 00536035  51                   push ecx
// 00536036  56                   push esi
// 00536037  6a34                 push 0x34
// 00536039  8bf1                 mov esi, ecx
// 0053603b  e8b69e0f00           call 0x62fef6
// 00536040  83c404               add esp, 4
// 00536043  89442404             mov dword ptr [esp + 4], eax
// 00536047  85c0                 test eax, eax
// 00536049  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00536051  740e                 je 0x536061
// 00536053  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00536057  51                   push ecx
// 00536058  8bc8                 mov ecx, eax
// 0053605a  e801eaffff           call 0x534a60
// 0053605f  eb02                 jmp 0x536063
// 00536061  33c0                 xor eax, eax
// 00536063  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00536067  8906                 mov dword ptr [esi], eax
// 00536069  8bc6                 mov eax, esi
// 0053606b  5e                   pop esi
// 0053606c  64890d00000000       mov dword ptr fs:[0], ecx
// 00536073  83c410               add esp, 0x10
// 00536076  c20400               ret 4

struct VFunctionRef_holder {
    void* ptr;
    VFunctionRef_holder(void* p);
};

struct VFunctionRef {
    void* data;
    VFunctionRef(void* p);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl VFunctionRef_ctor(void* mem, void* arg);

VFunctionRef::VFunctionRef(void* p)
{
    VFunctionRef_holder* h = (VFunctionRef_holder*)operator_new(0x34);
    if (h) {
        VFunctionRef_ctor(h, p);
        this->data = h;
    } else {
        this->data = 0;
    }
}
