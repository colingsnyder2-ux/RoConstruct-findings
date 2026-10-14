// roc 2008-06 00500ca0  unit: RBX::ViewNew::HeadBuilder  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00500ca0
//
// 00500ca0  8b442404             mov eax, dword ptr [esp + 4]
// 00500ca4  83f805               cmp eax, 5
// 00500ca7  775e                 ja 0x500d07
// 00500ca9  ff24850c0d5000       jmp dword ptr [eax*4 + 0x500d0c]
// 00500cb0  8b01                 mov eax, dword ptr [ecx]
// 00500cb2  8b542408             mov edx, dword ptr [esp + 8]
// 00500cb6  8b4010               mov eax, dword ptr [eax + 0x10]
// 00500cb9  52                   push edx
// 00500cba  ffd0                 call eax
// 00500cbc  c20800               ret 8
// 00500cbf  8b11                 mov edx, dword ptr [ecx]
// 00500cc1  8b442408             mov eax, dword ptr [esp + 8]
// 00500cc5  8b5204               mov edx, dword ptr [edx + 4]
// 00500cc8  50                   push eax
// 00500cc9  ffd2                 call edx
// 00500ccb  c20800               ret 8
// 00500cce  8b01                 mov eax, dword ptr [ecx]
// 00500cd0  8b542408             mov edx, dword ptr [esp + 8]
// 00500cd4  8b4018               mov eax, dword ptr [eax + 0x18]
// 00500cd7  52                   push edx
// 00500cd8  ffd0                 call eax
// 00500cda  c20800               ret 8
// 00500cdd  8b11                 mov edx, dword ptr [ecx]
// 00500cdf  8b442408             mov eax, dword ptr [esp + 8]
// 00500ce3  8b520c               mov edx, dword ptr [edx + 0xc]
// 00500ce6  50                   push eax
// 00500ce7  ffd2                 call edx
// 00500ce9  c20800               ret 8
// 00500cec  8b01                 mov eax, dword ptr [ecx]
// 00500cee  8b542408             mov edx, dword ptr [esp + 8]
// 00500cf2  8b4008               mov eax, dword ptr [eax + 8]
// 00500cf5  52                   push edx
// 00500cf6  ffd0                 call eax
// 00500cf8  c20800               ret 8
// 00500cfb  8b11                 mov edx, dword ptr [ecx]
// 00500cfd  8b442408             mov eax, dword ptr [esp + 8]
// 00500d01  8b5214               mov edx, dword ptr [edx + 0x14]
// 00500d04  50                   push eax
// 00500d05  ffd2                 call edx
// 00500d07  c20800               ret 8
// 00500d0a  8bff                 mov edi, edi
// 00500d0c  b00c                 mov al, 0xc
// 00500d0e  50                   push eax
// 00500d0f  00bf0c5000ce         add byte ptr [edi - 0x31ffaff4], bh
// 00500d15  0c50                 or al, 0x50
// 00500d17  00dd                 add ch, bl
// 00500d19  0c50                 or al, 0x50
// 00500d1b  00ec                 add ah, ch
// 00500d1d  0c50                 or al, 0x50
// 00500d1f  00fb                 add bl, bh
// 00500d21  0c50                 or al, 0x50
// library openrbx-client/RbxView\QuadVolume.cpp (function ?buildFace@LevelBuilder@View@RBX@@QAEXW4NormalId@3@W4Purpose@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/QuadVolume.cpp
