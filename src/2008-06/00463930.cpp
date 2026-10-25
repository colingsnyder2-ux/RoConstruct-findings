// from server: 100% by king_originala
// roc 2008-06 00463930  unit: CObjectBrowser  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463930
//
// 00463930  833d94df960000       cmp dword ptr [0x96df94], 0
// 00463937  56                   push esi
// 00463938  8bf1                 mov esi, ecx
// 0046393a  751b                 jne 0x463957
// 0046393c  683cb28100           push 0x81b23c
// 00463941  ff15cc218000         call dword ptr [0x8021cc]
// 00463947  a390df9600           mov dword ptr [0x96df90], eax
// 0046394c  85c0                 test eax, eax
// 0046394e  7507                 jne 0x463957
// 00463950  83c8ff               or eax, 0xffffffff
// 00463953  5e                   pop esi
// 00463954  c20400               ret 4
// 00463957  8b442408             mov eax, dword ptr [esp + 8]
// 0046395b  ff0594df9600         inc dword ptr [0x96df94]
// 00463961  50                   push eax
// 00463962  8bce                 mov ecx, esi
// 00463964  e8f7f2ffff           call 0x462c60
// 00463969  40                   inc eax
// 0046396a  f7d8                 neg eax
// 0046396c  1bc0                 sbb eax, eax
// 0046396e  f7d8                 neg eax
// 00463970  48                   dec eax
// 00463971  5e                   pop esi
// 00463972  c20400               ret 4

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
