// from server: 90% by colin
// roc 2007-08 0041d870  unit: CInstanceRecord::CNameItem  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d870
//
// 0041d870  55                   push ebp
// 0041d871  8bec                 mov ebp, esp
// 0041d873  6afe                 push -2
// 0041d875  6890248400           push 0x842490
// 0041d87a  68760a6300           push 0x630a76
// 0041d87f  64a100000000         mov eax, dword ptr fs:[0]
// 0041d885  50                   push eax
// 0041d886  83ec08               sub esp, 8
// 0041d889  53                   push ebx
// 0041d88a  56                   push esi
// 0041d88b  57                   push edi
// 0041d88c  a188518b00           mov eax, dword ptr [0x8b5188]
// 0041d891  3145f8               xor dword ptr [ebp - 8], eax
// 0041d894  33c5                 xor eax, ebp
// 0041d896  50                   push eax
// 0041d897  8d45f0               lea eax, [ebp - 0x10]
// 0041d89a  64a300000000         mov dword ptr fs:[0], eax
// 0041d8a0  8965e8               mov dword ptr [ebp - 0x18], esp
// 0041d8a3  8bf1                 mov esi, ecx
// 0041d8a5  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0041d8ac  8b06                 mov eax, dword ptr [esi]
// 0041d8ae  50                   push eax
// 0041d8af  ff15fcd27700         call dword ptr [0x77d2fc]
// 0041d8b5  c745fcfeffffff       mov dword ptr [ebp - 4], 0xfffffffe
// 0041d8bc  c6460401             mov byte ptr [esi + 4], 1
// 0041d8c0  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 0041d8c3  64890d00000000       mov dword ptr fs:[0], ecx
// 0041d8ca  59                   pop ecx
// 0041d8cb  5f                   pop edi
// 0041d8cc  5e                   pop esi
// 0041d8cd  5b                   pop ebx
// 0041d8ce  8be5                 mov esp, ebp
// 0041d8d0  5d                   pop ebp
// 0041d8d1  c3                   ret 

struct CNameItem {
    void* field0;
    unsigned char field4;
    void construct();
};

extern "C" void __stdcall EnterCriticalSection(void*);

void CNameItem::construct()
{
    __try {
        EnterCriticalSection(field0);
    } __finally {
    }
    field4 = 1;
}
