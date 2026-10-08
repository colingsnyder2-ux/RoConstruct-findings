// roc 2009-12 004d5f70  unit: G3D::Win32Window  size: 868 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5f70
//
// 004d5f70  680c050000           push 0x50c
// 004d5f75  6a00                 push 0
// 004d5f77  6888d1b700           push 0xb7d188
// 004d5f7c  e823eb3100           call 0x7f4aa4
// 004d5f81  b860000000           mov eax, 0x60
// 004d5f86  83c40c               add esp, 0xc
// 004d5f89  c705a8d1b70008000000 mov dword ptr [0xb7d1a8], 8
// 004d5f93  c705acd1b70009000000 mov dword ptr [0xb7d1ac], 9
// 004d5f9d  c705b8d1b7000c000000 mov dword ptr [0xb7d1b8], 0xc
// 004d5fa7  c705bcd1b7000d000000 mov dword ptr [0xb7d1bc], 0xd
// 004d5fb1  c705d4d1b70013000000 mov dword ptr [0xb7d1d4], 0x13
// 004d5fbb  c705f4d1b7001b000000 mov dword ptr [0xb7d1f4], 0x1b
// 004d5fc5  c70508d2b70020000000 mov dword ptr [0xb7d208], 0x20
// 004d5fcf  c70500d5b70027000000 mov dword ptr [0xb7d500], 0x27
// 004d5fd9  c70578d4b7002c000000 mov dword ptr [0xb7d478], 0x2c
// 004d5fe3  c7057cd4b7002d000000 mov dword ptr [0xb7d47c], 0x2d
// 004d5fed  c70580d4b7002e000000 mov dword ptr [0xb7d480], 0x2e
// 004d5ff7  c70584d4b7002f000000 mov dword ptr [0xb7d484], 0x2f
// 004d6001  c70548d2b70030000000 mov dword ptr [0xb7d248], 0x30
// 004d600b  c7054cd2b70031000000 mov dword ptr [0xb7d24c], 0x31
// 004d6015  c70550d2b70032000000 mov dword ptr [0xb7d250], 0x32
// 004d601f  c70554d2b70033000000 mov dword ptr [0xb7d254], 0x33
// 004d6029  c70558d2b70034000000 mov dword ptr [0xb7d258], 0x34
// 004d6033  c7055cd2b70035000000 mov dword ptr [0xb7d25c], 0x35
// 004d603d  c70560d2b70036000000 mov dword ptr [0xb7d260], 0x36
// 004d6047  c70564d2b70037000000 mov dword ptr [0xb7d264], 0x37
// 004d6051  c70568d2b70038000000 mov dword ptr [0xb7d268], 0x38
// 004d605b  c7056cd2b70039000000 mov dword ptr [0xb7d26c], 0x39
// 004d6065  c70570d4b7003b000000 mov dword ptr [0xb7d470], 0x3b
// 004d606f  c70574d4b7003d000000 mov dword ptr [0xb7d474], 0x3d
// 004d6079  c705f4d4b7005b000000 mov dword ptr [0xb7d4f4], 0x5b
// 004d6083  c705f8d4b7005c000000 mov dword ptr [0xb7d4f8], 0x5c
// 004d608d  c705fcd4b7005d000000 mov dword ptr [0xb7d4fc], 0x5d
// 004d6097  a388d4b700           mov dword ptr [0xb7d488], eax
// 004d609c  a304d5b700           mov dword ptr [0xb7d504], eax
// 004d60a1  c70540d2b7007f000000 mov dword ptr [0xb7d240], 0x7f
// 004d60ab  c70508d3b70000010000 mov dword ptr [0xb7d308], 0x100
// 004d60b5  c7050cd3b70001010000 mov dword ptr [0xb7d30c], 0x101
// 004d60bf  c70510d3b70002010000 mov dword ptr [0xb7d310], 0x102
// 004d60c9  c70514d3b70003010000 mov dword ptr [0xb7d314], 0x103
// 004d60d3  c70518d3b70004010000 mov dword ptr [0xb7d318], 0x104
// 004d60dd  c7051cd3b70005010000 mov dword ptr [0xb7d31c], 0x105
// 004d60e7  c70520d3b70006010000 mov dword ptr [0xb7d320], 0x106
// 004d60f1  c70524d3b70007010000 mov dword ptr [0xb7d324], 0x107
// 004d60fb  c70528d3b70008010000 mov dword ptr [0xb7d328], 0x108
// 004d6105  c7052cd3b70009010000 mov dword ptr [0xb7d32c], 0x109
// 004d610f  c70540d3b7000a010000 mov dword ptr [0xb7d340], 0x10a
// 004d6119  c70544d3b7000b010000 mov dword ptr [0xb7d344], 0x10b
// 004d6123  c70530d3b7000c010000 mov dword ptr [0xb7d330], 0x10c
// 004d612d  c7053cd3b7000d010000 mov dword ptr [0xb7d33c], 0x10d
// 004d6137  c70534d3b7000e010000 mov dword ptr [0xb7d334], 0x10e
// 004d6141  c70520d2b70011010000 mov dword ptr [0xb7d220], 0x111
// 004d614b  c70528d2b70012010000 mov dword ptr [0xb7d228], 0x112
// 004d6155  c70524d2b70013010000 mov dword ptr [0xb7d224], 0x113
// 004d615f  c7051cd2b70014010000 mov dword ptr [0xb7d21c], 0x114
// 004d6169  c7053cd2b70015010000 mov dword ptr [0xb7d23c], 0x115
// 004d6173  c70518d2b70016010000 mov dword ptr [0xb7d218], 0x116
// 004d617d  c70514d2b70017010000 mov dword ptr [0xb7d214], 0x117
// 004d6187  c7050cd2b70018010000 mov dword ptr [0xb7d20c], 0x118
// 004d6191  c70510d2b70019010000 mov dword ptr [0xb7d210], 0x119
// 004d619b  c70548d3b7001a010000 mov dword ptr [0xb7d348], 0x11a
// 004d61a5  c7054cd3b7001b010000 mov dword ptr [0xb7d34c], 0x11b
// 004d61af  c70550d3b7001c010000 mov dword ptr [0xb7d350], 0x11c
// 004d61b9  c70554d3b7001d010000 mov dword ptr [0xb7d354], 0x11d
// 004d61c3  c70558d3b7001e010000 mov dword ptr [0xb7d358], 0x11e
// 004d61cd  c7055cd3b7001f010000 mov dword ptr [0xb7d35c], 0x11f
// 004d61d7  c70560d3b70020010000 mov dword ptr [0xb7d360], 0x120
// 004d61e1  c70564d3b70021010000 mov dword ptr [0xb7d364], 0x121
// 004d61eb  c70568d3b70022010000 mov dword ptr [0xb7d368], 0x122
// 004d61f5  c7056cd3b70023010000 mov dword ptr [0xb7d36c], 0x123
// 004d61ff  c70570d3b70024010000 mov dword ptr [0xb7d370], 0x124
// 004d6209  c70574d3b70025010000 mov dword ptr [0xb7d374], 0x125
// 004d6213  c70578d3b70026010000 mov dword ptr [0xb7d378], 0x126
// 004d621d  c7057cd3b70027010000 mov dword ptr [0xb7d37c], 0x127
// 004d6227  c70580d3b70028010000 mov dword ptr [0xb7d380], 0x128
// 004d6231  c705c8d3b7002c010000 mov dword ptr [0xb7d3c8], 0x12c
// 004d623b  c705d8d1b7002d010000 mov dword ptr [0xb7d1d8], 0x12d
// 004d6245  c705ccd3b7002e010000 mov dword ptr [0xb7d3cc], 0x12e
// 004d624f  c7050cd4b7002f010000 mov dword ptr [0xb7d40c], 0x12f
// 004d6259  c70508d4b70030010000 mov dword ptr [0xb7d408], 0x130
// 004d6263  c70514d4b70031010000 mov dword ptr [0xb7d414], 0x131
// 004d626d  b83c010000           mov eax, 0x13c
// 004d6272  c70510d4b70032010000 mov dword ptr [0xb7d410], 0x132
// 004d627c  c7051cd4b70033010000 mov dword ptr [0xb7d41c], 0x133
// 004d6286  c70518d4b70034010000 mov dword ptr [0xb7d418], 0x134
// 004d6290  c705f8d2b70038010000 mov dword ptr [0xb7d2f8], 0x138
// 004d629a  c705f4d2b70037010000 mov dword ptr [0xb7d2f4], 0x137
// 004d62a4  c70544d2b7003b010000 mov dword ptr [0xb7d244], 0x13b
// 004d62ae  a330d2b700           mov dword ptr [0xb7d230], eax
// 004d62b3  a338d2b700           mov dword ptr [0xb7d238], eax
// 004d62b8  c70594d1b7003e010000 mov dword ptr [0xb7d194], 0x13e
// 004d62c2  c705fcd2b7003f010000 mov dword ptr [0xb7d2fc], 0x13f
// 004d62cc  c60595d6b70001       mov byte ptr [0xb7d695], 1
// 004d62d3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?initWin32KeyMap@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
