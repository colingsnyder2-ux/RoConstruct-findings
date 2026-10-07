// roc 2012-06 005884c0  unit: RBX::Network::Replicator::EventInvocationItem  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005884c0
//
// 005884c0  56                   push esi
// 005884c1  8bf1                 mov esi, ecx
// 005884c3  8d4e10               lea ecx, [esi + 0x10]
// 005884c6  e885fcffff           call 0x588150
// 005884cb  8bce                 mov ecx, esi
// 005884cd  5e                   pop esi
// 005884ce  e9eda1feff           jmp 0x5726c0
// library xtp-15.2.1/Source\Chart\Diagram\Diagram2D\XTPChartDiagram2D.cpp (function ??1CXTPChartDiagram@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Diagram/Diagram2D/XTPChartDiagram2D.cpp
