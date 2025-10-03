# Java Parser
以yacc完成Java Parser，目標是結合lab1所完成的Java scanner，得到Java程式中的token，再以yacc判斷各token的組合是否符合Java的Syntactic definitions
而此parser要考慮
* 遇到語法錯誤時，要產生該錯誤的error message(錯誤的位置、錯誤的原因)
* 遇到error後，仍要盡可能處理完輸出，即是具有error recovery的能力


## 執行方式與說明
請見final資料夾中的README.pdf
