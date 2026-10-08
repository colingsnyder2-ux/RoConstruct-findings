// roc 2007-08 004eefc0  unit: RBX::View::BevelMesh::Builder  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eefc0
//
// 004eefc0  8b442404             mov eax, dword ptr [esp + 4]
// 004eefc4  56                   push esi
// 004eefc5  50                   push eax
// 004eefc6  8bf1                 mov esi, ecx
// 004eefc8  e8e3fcffff           call 0x4eecb0
// 004eefcd  d9ee                 fldz 
// 004eefcf  d85e20               fcomp dword ptr [esi + 0x20]
// 004eefd2  dfe0                 fnstsw ax
// 004eefd4  f6c405               test ah, 5
// 004eefd7  0f8a1c010000         jp 0x4ef0f9
// 004eefdd  6a04                 push 4
// 004eefdf  6a05                 push 5
// 004eefe1  6a03                 push 3
// 004eefe3  6a00                 push 0
// 004eefe5  8bce                 mov ecx, esi
// 004eefe7  e894ffffff           call 0x4eef80
// 004eefec  6a0b                 push 0xb
// 004eefee  6a08                 push 8
// 004eeff0  6a07                 push 7
// 004eeff2  6a04                 push 4
// 004eeff4  8bce                 mov ecx, esi
// 004eeff6  e885ffffff           call 0x4eef80
// 004eeffb  6a00                 push 0
// 004eeffd  6a01                 push 1
// 004eefff  6a0a                 push 0xa
// 004ef001  6a0b                 push 0xb
// 004ef003  8bce                 mov ecx, esi
// 004ef005  e876ffffff           call 0x4eef80
// 004ef00a  6a0f                 push 0xf
// 004ef00c  6a0c                 push 0xc
// 004ef00e  6a06                 push 6
// 004ef010  6a07                 push 7
// 004ef012  8bce                 mov ecx, esi
// 004ef014  e867ffffff           call 0x4eef80
// 004ef019  6a09                 push 9
// 004ef01b  6a0a                 push 0xa
// 004ef01d  6a13                 push 0x13
// 004ef01f  6a10                 push 0x10
// 004ef021  8bce                 mov ecx, esi
// 004ef023  e858ffffff           call 0x4eef80
// 004ef028  6a14                 push 0x14
// 004ef02a  6a15                 push 0x15
// 004ef02c  6a02                 push 2
// 004ef02e  6a03                 push 3
// 004ef030  8bce                 mov ecx, esi
// 004ef032  e849ffffff           call 0x4eef80
// 004ef037  6a01                 push 1
// 004ef039  6a02                 push 2
// 004ef03b  6a12                 push 0x12
// 004ef03d  6a13                 push 0x13
// 004ef03f  8bce                 mov ecx, esi
// 004ef041  e83affffff           call 0x4eef80
// 004ef046  6a17                 push 0x17
// 004ef048  6a14                 push 0x14
// 004ef04a  6a05                 push 5
// 004ef04c  6a06                 push 6
// 004ef04e  8bce                 mov ecx, esi
// 004ef050  e82bffffff           call 0x4eef80
// 004ef055  6a08                 push 8
// 004ef057  6a09                 push 9
// 004ef059  6a0e                 push 0xe
// 004ef05b  6a0f                 push 0xf
// 004ef05d  8bce                 mov ecx, esi
// 004ef05f  e81cffffff           call 0x4eef80
// 004ef064  6a10                 push 0x10
// 004ef066  6a11                 push 0x11
// 004ef068  6a0d                 push 0xd
// 004ef06a  6a0e                 push 0xe
// 004ef06c  8bce                 mov ecx, esi
// 004ef06e  e80dffffff           call 0x4eef80
// 004ef073  6a15                 push 0x15
// 004ef075  6a16                 push 0x16
// 004ef077  6a11                 push 0x11
// 004ef079  6a12                 push 0x12
// 004ef07b  8bce                 mov ecx, esi
// 004ef07d  e8fefeffff           call 0x4eef80
// 004ef082  6a0c                 push 0xc
// 004ef084  6a0d                 push 0xd
// 004ef086  6a16                 push 0x16
// 004ef088  6a17                 push 0x17
// 004ef08a  8bce                 mov ecx, esi
// 004ef08c  e8effeffff           call 0x4eef80
// 004ef091  6a0b                 push 0xb
// 004ef093  6a04                 push 4
// 004ef095  6a00                 push 0
// 004ef097  8bce                 mov ecx, esi
// 004ef099  e8b2feffff           call 0x4eef50
// 004ef09e  6a14                 push 0x14
// 004ef0a0  6a03                 push 3
// 004ef0a2  6a05                 push 5
// 004ef0a4  8bce                 mov ecx, esi
// 004ef0a6  e8a5feffff           call 0x4eef50
// 004ef0ab  6a13                 push 0x13
// 004ef0ad  6a0a                 push 0xa
// 004ef0af  6a01                 push 1
// 004ef0b1  8bce                 mov ecx, esi
// 004ef0b3  e898feffff           call 0x4eef50
// 004ef0b8  6a15                 push 0x15
// 004ef0ba  6a12                 push 0x12
// 004ef0bc  6a02                 push 2
// 004ef0be  8bce                 mov ecx, esi
// 004ef0c0  e88bfeffff           call 0x4eef50
// 004ef0c5  6a07                 push 7
// 004ef0c7  6a08                 push 8
// 004ef0c9  6a0f                 push 0xf
// 004ef0cb  8bce                 mov ecx, esi
// 004ef0cd  e87efeffff           call 0x4eef50
// 004ef0d2  6a17                 push 0x17
// 004ef0d4  6a06                 push 6
// 004ef0d6  6a0c                 push 0xc
// 004ef0d8  8bce                 mov ecx, esi
// 004ef0da  e871feffff           call 0x4eef50
// 004ef0df  6a09                 push 9
// 004ef0e1  6a10                 push 0x10
// 004ef0e3  6a0e                 push 0xe
// 004ef0e5  8bce                 mov ecx, esi
// 004ef0e7  e864feffff           call 0x4eef50
// 004ef0ec  6a11                 push 0x11
// 004ef0ee  6a16                 push 0x16
// 004ef0f0  6a0d                 push 0xd
// 004ef0f2  8bce                 mov ecx, esi
// 004ef0f4  e857feffff           call 0x4eef50
// 004ef0f9  5e                   pop esi
// 004ef0fa  c20400               ret 4
// library rbxgs-view/BevelMesh.cpp (function ?build@Builder@BevelMesh@View@RBX@@UAEXW4Purpose@LevelBuilder@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BevelMesh.cpp
