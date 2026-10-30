// from server: 100% by auto
// roc 2012-06 009d5060  unit: CXTPPrintingDialog  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d5060
//
// 009d5060  56                   push esi
// 009d5061  6a00                 push 0
// 009d5063  8bf1                 mov esi, ecx
// 009d5065  e88c480c00           call 0xa998f6
// 009d506a  8bce                 mov ecx, esi
// 009d506c  5e                   pop esi
// 009d506d  e990d9faff           jmp 0x982a02
// library xtp-15.2.1/Source\Chart\XTPChartSeries.cpp (function ?Release@CXTPChartSeries@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeries.cpp
