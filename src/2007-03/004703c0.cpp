// roc 2007-03 004703c0  unit: seg_00470000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004703c0
//
// 004703c0  8b4958               mov ecx, dword ptr [ecx + 0x58]
// 004703c3  8d41fe               lea eax, [ecx - 2]
// 004703c6  83f805               cmp eax, 5
// 004703c9  7719                 ja 0x4703e4
// 004703cb  ff2485e8034700       jmp dword ptr [eax*4 + 0x4703e8]
// 004703d2  b813850000           mov eax, 0x8513
// 004703d7  c3                   ret 
// 004703d8  b8e10d0000           mov eax, 0xde1
// 004703dd  c3                   ret 
// 004703de  b8f5840000           mov eax, 0x84f5
// 004703e3  c3                   ret 
// 004703e4  33c0                 xor eax, eax
// 004703e6  c3                   ret 
// 004703e7  90                   nop 
// 004703e8  d803                 fadd dword ptr [ebx]
// 004703ea  47                   inc edi
// 004703eb  00e4                 add ah, ah
// 004703ed  034700               add eax, dword ptr [edi]
// 004703f0  de03                 fiadd word ptr [ebx]
// 004703f2  47                   inc edi
// 004703f3  00d2                 add dl, dl
// 004703f5  034700               add eax, dword ptr [edi]
// 004703f8  d803                 fadd dword ptr [ebx]
// 004703fa  47                   inc edi
// 004703fb  00d2                 add dl, dl
// 004703fd  034700               add eax, dword ptr [edi]
// library rbxgs-g3d/GLG3Dcpp\Texture.cpp (function ?getOpenGLTextureTarget@Texture@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Texture.cpp
