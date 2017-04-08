# Project DRAFT
opcode

MV MK 65 KM DA 01 02 03 04 AD


mov @, @

goto @

mark-env ### stop-mark-env

mark ### stop-mark

mov mark-env 'a' mark-env-end, data  stop-data

goto mark-bytecode 'exit' mark-bytecode-end

data ### stop-data

