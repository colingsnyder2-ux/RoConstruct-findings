// from server: 74% by colin
// roc 2007-08 0053b7f0  unit: RBX::ScriptContext  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053b7f0
//
// 0053b7f0  56                   push esi
// 0053b7f1  8b742408             mov esi, dword ptr [esp + 8]
// 0053b7f5  85f6                 test esi, esi
// 0053b7f7  742c                 je 0x53b825
// 0053b7f9  8da42400000000       lea esp, [esp]
// 0053b800  6a00                 push 0
// 0053b802  68044e8800           push 0x884e04
// 0053b807  684c1f8800           push 0x881f4c
// 0053b80c  6a00                 push 0
// 0053b80e  56                   push esi
// 0053b80f  e822550f00           call 0x630d36
// 0053b814  83c414               add esp, 0x14
// 0053b817  85c0                 test eax, eax
// 0053b819  750e                 jne 0x53b829
// 0053b81b  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 0053b821  85f6                 test esi, esi
// 0053b823  75db                 jne 0x53b800
// 0053b825  33c0                 xor eax, eax
// 0053b827  5e                   pop esi
// 0053b828  c3                   ret 
// 0053b829  8bc8                 mov ecx, eax
// 0053b82b  5e                   pop esi
// 0053b82c  e97f9cf1ff           jmp 0x4554b0

struct RBX_Instance {
    static const char* className();
};

struct RBX_ServiceProvider {
    static const char* className();
};

struct RBX_ScriptContext {
    void* findService(const char* name, const char* className, int, int);
};

extern "C" void* __cdecl func_00630d36(void* a, int b, const char* c, const char* d, int e);
extern "C" void __cdecl func_004554b0(void* p);

void* __stdcall getService(RBX_ScriptContext* ctx)
{
    while (ctx) {
        void* result = func_00630d36(ctx, 0, (const char*)0x881f4c, (const char*)0x884e04, 0);
        if (result) {
            func_004554b0(result);
            return result;
        }
        ctx = *(RBX_ScriptContext**)((char*)ctx + 0xbc);
    }
    return 0;
}
