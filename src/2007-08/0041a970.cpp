// from server: 46% by colin
// roc 2007-08 0041a970  unit: VDHTMLWindow::?$BoundFuncDesc  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041a970
//
// 0041a970  56                   push esi
// 0041a971  57                   push edi
// 0041a972  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0041a976  8b4710               mov eax, dword ptr [edi + 0x10]
// 0041a979  83ec0c               sub esp, 0xc
// 0041a97c  8bcc                 mov ecx, esp
// 0041a97e  89642418             mov dword ptr [esp + 0x18], esp
// 0041a982  8d7708               lea esi, [edi + 8]
// 0041a985  6a00                 push 0
// 0041a987  50                   push eax
// 0041a988  e813daffff           call 0x4183a0
// 0041a98d  56                   push esi
// 0041a98e  8bcf                 mov ecx, edi
// 0041a990  e8abb2ffff           call 0x415c40
// 0041a995  5f                   pop edi
// 0041a996  5e                   pop esi
// 0041a997  c3                   ret 

struct BoundFuncDesc {
    void construct();
};

extern "C" void __stdcall sub_4183A0(void*, int, int);
extern "C" void __stdcall sub_415C40(void*, void*);

void BoundFuncDesc::construct()
{
    int* self = (int*)this;
    int v = self[4];
    sub_4183A0((void*)(self + 2), v, 0);
    sub_415C40(self, (void*)(self + 2));
}
