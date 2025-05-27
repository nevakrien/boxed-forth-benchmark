\ --- bench-power.4th ---

: box-pow { result x n -- }
    1 result !
    n @ 0 do
        result @ x @ * result !
    loop ;

variable result
variable base
variable count

2 base !
5 count !

: run-box-pow ( -- )
    1000000000 0 do
        result base count box-pow
    loop ;

run-box-pow
bye
