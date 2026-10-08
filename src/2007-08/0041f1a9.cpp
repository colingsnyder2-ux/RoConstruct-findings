// from server: 54% by colin
// roc 2007-08 0041f1a9  unit: CSettingsExplorer  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f1a9
//
// 0041f1a9  83ff02               cmp edi, 2
// 0041f1ac  740b                 je 0x41f1b9
// 0041f1ae  8b45e4               mov eax, dword ptr [ebp - 0x1c]
// 0041f1b1  50                   push eax
// 0041f1b2  6a00                 push 0
// 0041f1b4  e87f0d2100           call 0x62ff38
// 0041f1b9  c3                   ret 

extern "C" void __stdcall sub_0062FF38(int, int);

void sub_0041F1A9(int a, int b, int c, int d, int e, int f, int g, int h)
{
    if (h != 2)
    {
        sub_0062FF38(0, g);
    }
}
