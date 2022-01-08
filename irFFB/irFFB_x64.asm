.CODE

x64_sum_prod@@32 PROC PUBLIC
    ;movaps xmm0, xmmword ptr prod
    ;movaps xmm1, xmmword ptr prod+16
    ;movaps xmm2, xmmword ptr prod+32
    vaddps xmm0, xmm1, xmm2
    haddps xmm0, xmm0
    haddps xmm0, xmm0
    cvttss2si eax, xmm0
    mov dword ptr [r9], eax
    ret
x64_sum_prod@@32 ENDP
END
