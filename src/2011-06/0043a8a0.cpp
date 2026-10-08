// from server: 100% by auto
// roc 2011-06 0043a8a0  unit: CMainFrame  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043a8a0
//
// 0043a8a0  56                   push esi
// 0043a8a1  8bf1                 mov esi, ecx
// 0043a8a3  56                   push esi
// 0043a8a4  ff15ac0aa400         call dword ptr [0xa40aac]
// 0043a8aa  8bc6                 mov eax, esi
// 0043a8ac  5e                   pop esi
// 0043a8ad  c3                   ret 
// library g3d-6.09/G3Dcpp\GThread.cpp (function ??0GMutex@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GThread.cpp
