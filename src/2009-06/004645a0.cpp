// roc 2009-06 004645a0  unit: CScriptEditor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004645a0
//
// 004645a0  833d08b6a30000       cmp dword ptr [0xa3b608], 0
// 004645a7  56                   push esi
// 004645a8  8bf1                 mov esi, ecx
// 004645aa  751b                 jne 0x4645c7
// 004645ac  68fcbb8b00           push 0x8bbbfc
// 004645b1  ff15d4e18900         call dword ptr [0x89e1d4]
// 004645b7  a304b6a300           mov dword ptr [0xa3b604], eax
// 004645bc  85c0                 test eax, eax
// 004645be  7507                 jne 0x4645c7
// 004645c0  83c8ff               or eax, 0xffffffff
// 004645c3  5e                   pop esi
// 004645c4  c20400               ret 4
// 004645c7  8b442408             mov eax, dword ptr [esp + 8]
// 004645cb  ff0508b6a300         inc dword ptr [0xa3b608]
// 004645d1  50                   push eax
// 004645d2  8bce                 mov ecx, esi
// 004645d4  e8f7f2ffff           call 0x4638d0
// 004645d9  40                   inc eax
// 004645da  f7d8                 neg eax
// 004645dc  1bc0                 sbb eax, eax
// 004645de  f7d8                 neg eax
// 004645e0  48                   dec eax
// 004645e1  5e                   pop esi
// 004645e2  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX000000_00463930@CObjectBrowser@@QAEHPAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" void* (__stdcall *LoadLibraryA)(const char*);
extern void* moduleHandle;
extern int referenceCount;

struct CObjectBrowser
{
    int func_00462c60(void* argument);
    int func_00463930(void* argument);
};

int CObjectBrowser::func_00463930(void* argument)
{
    if (referenceCount == 0)
    {
        moduleHandle = LoadLibraryA("SciLexer.dll");
        if (moduleHandle == 0)
            return -1;
    }

    ++referenceCount;
    return func_00462c60(argument) == -1 ? -1 : 0;
}