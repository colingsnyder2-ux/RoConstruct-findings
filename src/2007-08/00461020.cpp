// from server: 28% by colin
// roc 2007-08 00461020  unit: RBX::VRunService::?$MarshaledListener::EventData  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00461020
//
// 00461020  55                   push ebp
// 00461021  8bec                 mov ebp, esp
// 00461023  6aff                 push -1
// 00461025  68e0287400           push 0x7428e0
// 0046102a  64a100000000         mov eax, dword ptr fs:[0]
// 00461030  50                   push eax
// 00461031  83ec08               sub esp, 8
// 00461034  53                   push ebx
// 00461035  56                   push esi
// 00461036  57                   push edi
// 00461037  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046103c  33c5                 xor eax, ebp
// 0046103e  50                   push eax
// 0046103f  8d45f4               lea eax, [ebp - 0xc]
// 00461042  64a300000000         mov dword ptr fs:[0], eax
// 00461048  8965f0               mov dword ptr [ebp - 0x10], esp
// 0046104b  8bf1                 mov esi, ecx
// 0046104d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00461050  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00461053  85c9                 test ecx, ecx
// 00461055  7431                 je 0x461088
// 00461057  56                   push esi
// 00461058  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0046105f  e81c6bfdff           call 0x437b80
// 00461064  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00461067  8b4604               mov eax, dword ptr [esi + 4]
// 0046106a  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0046106d  8b11                 mov edx, dword ptr [ecx]
// 0046106f  57                   push edi
// 00461070  50                   push eax
// 00461071  8b4208               mov eax, dword ptr [edx + 8]
// 00461074  ffd0                 call eax
// 00461076  eb09                 jmp 0x461081

struct EventData {
    char pad0[4];
    int field4;
    char pad8[4];
    int fieldC;
    int field10;
    void (__stdcall *dtor)(void*);
    void destroy();
};

void __stdcall sub_437b80(void*);

void EventData::destroy()
{
    if (fieldC != 0) {
        sub_437b80(this);
        int e = field10;
        int a = field4;
        int c = fieldC;
        void** vt = (void**)c;
        void (__stdcall *fn)(int, int) = (void (__stdcall *)(int, int))vt[2];
        fn(a, e);
    }
}
