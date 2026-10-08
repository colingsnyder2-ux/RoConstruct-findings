// from server: 69% by colin
// roc 2007-08 00429220  unit: ThreadLogManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00429220
//
// 00429220  56                   push esi
// 00429221  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00429225  56                   push esi
// 00429226  6a01                 push 1
// 00429228  e813eaffff           call 0x427c40
// 0042922d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00429231  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00429235  83c408               add esp, 8
// 00429238  50                   push eax
// 00429239  686c4e7c00           push 0x7c4e6c
// 0042923e  6a00                 push 0
// 00429240  6a00                 push 0
// 00429242  56                   push esi
// 00429243  51                   push ecx
// 00429244  e817feffff           call 0x429060
// 00429249  5e                   pop esi
// 0042924a  c3                   ret 

extern "C" void __cdecl func_00427c40(int, void*);
extern "C" void __cdecl func_00429060(void*, void*, int, int, void*, void*);

void func_00429220(void* self, void* a, void* b)
{
    func_00427c40(1, a);
    func_00429060(self, a, 0, 0, (void*)0x7c4e6c, b);
}
