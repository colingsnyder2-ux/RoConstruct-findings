// from server: 85% by colin
// roc 2007-08 00460000  unit: CScriptEditor  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00460000
//
// 00460000  56                   push esi
// 00460001  e82ad2ffff           call 0x45d230
// 00460006  8bf0                 mov esi, eax
// 00460008  6a01                 push 1
// 0046000a  8bce                 mov ecx, esi
// 0046000c  e84fbfffff           call 0x45bf60
// 00460011  6a01                 push 1
// 00460013  50                   push eax
// 00460014  8bce                 mov ecx, esi
// 00460016  e835caffff           call 0x45ca50
// 0046001b  6a01                 push 1
// 0046001d  50                   push eax
// 0046001e  8bce                 mov ecx, esi
// 00460020  e8bbc2ffff           call 0x45c2e0
// 00460025  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00460029  8b11                 mov edx, dword ptr [ecx]
// 0046002b  83e001               and eax, 1
// 0046002e  5e                   pop esi
// 0046002f  89442404             mov dword ptr [esp + 4], eax
// 00460033  8b02                 mov eax, dword ptr [edx]
// 00460035  ffe0                 jmp eax

struct CScriptEditor {
    void* method1(int);
    void* method2(void*, int);
    void* method3(void*, int);
};

extern "C" void* __cdecl func_0045d230();

void __stdcall func_00460000(void* arg)
{
    void* obj = func_0045d230();
    void* a = ((CScriptEditor*)obj)->method1(1);
    void* b = ((CScriptEditor*)obj)->method2(a, 1);
    void* c = ((CScriptEditor*)obj)->method3(b, 1);
    void** vtable = *(void***)arg;
    int flag = (int)c & 1;
    void (*fn)(void*, int) = (void (*)(void*, int))vtable[0];
    fn(arg, flag);
}
