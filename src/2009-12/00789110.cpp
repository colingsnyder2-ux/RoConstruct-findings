// roc 2009-12 00789110  unit: RBX::UniversalTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00789110
//
// 00789110  8b442408             mov eax, dword ptr [esp + 8]
// 00789114  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00789118  e8d3f4ffff           call 0x7885f0
// 0078911d  8b00                 mov eax, dword ptr [eax]
// 0078911f  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 00789123  884807               mov byte ptr [eax + 7], cl
// 00789126  c3                   ret 
// copied from an identical function in another client (function ?func@@YAXPAUTool@@HD@Z)

// from server: 100% by tester
// roc-flags: /O2 /GS- /MD
struct Inner { char pad[7]; char m_flag; };
struct Outer { Inner* m_inner; };
struct Tool { void* pad; };
__declspec(noinline) static Outer* doIt(Tool* t, int b) { return (Outer*)((char*)t + b * 4); }
void func(Tool* a, int b, char v) { doIt(a, b)->m_inner->m_flag = v; }